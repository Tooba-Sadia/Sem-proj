import React, { useState, useEffect } from "react";
import Button from "./Button";
import { useAuth0 } from "@auth0/auth0-react";

const ARRAYSIZE = 80;

const Main = () => {
  const { loginWithRedirect, logout, isAuthenticated, user } = useAuth0();
  const [primaryArray, setPrimaryArray] = useState([]);
  // const [algorithm, setAlgorithm] = useState("bubbleSort");
  const [animationSpeed, setAnimationSpeed] = useState(1);

  const [disableOptions, setDisableOptions] = useState(false);

  const randomizeArray = () => {
    let array = [];
    for (let i = 0; i < ARRAYSIZE; i++) {
      array.push(randomVals(20, 400));
    }

    setPrimaryArray(array);
  };
  console.log(primaryArray);
  const randomVals = (min, max) => {
    let randomVal = Math.floor(Math.random() * max);
    return randomVal;
  };

  useEffect(() => {
    randomizeArray();
  }, []);

  const sleep = (milliSeconds) => {
    return new Promise((resolve) => setTimeout(resolve, milliSeconds));
  };

  const finishedAnimation = async () => {
    for (let i = 0; i < primaryArray.length; i++) {
      let bar = document.getElementById(i).style;
      bar.backgroundColor = "	#800000";

      await sleep(animationSpeed);
    }
    setDisableOptions(false);
  };

  // Bubble Sort
  const bubbleSort = async () => {
    let currentArr = primaryArray;
    let sorted = false;

    while (!sorted) {
      sorted = true;

      for (let i = currentArr.length - 1; i > 0; i--) {
        for (let j = currentArr.length - i - 1; j > -1; j--) {
          if (currentArr[j] > currentArr[j + 1]) {
            let temp = currentArr[j];
            currentArr[j] = currentArr[j + 1];
            currentArr[j + 1] = temp;
            setPrimaryArray([...primaryArray, currentArr]);

            let bar1 = document.getElementById(j).style;
            let bar2 = document.getElementById(j + 1).style;
            // bar1.backgroundColor = "##FF0000";
            // bar2.backgroundColor = "#000000";

            await sleep(animationSpeed);

            // bar1.backgroundColor = "#FF7F50";
            // bar2.backgroundColor = "#FF7F50";

            sorted = false;
          }
        }
      }
      if (sorted) finishedAnimation();
    }
  };
  // Selection Sort
  const selectionSort = async () => {
    let currentArr = primaryArray;
    let sorted = false;
    // setAlgorithm({ name: "Selection Sort", timeComplexity: "O(n^2)" });

    while (!sorted) {
      sorted = true;

      for (let i = 0; i < currentArr.length - 1; i++) {
        for (let j = i + 1; j < currentArr.length; j++) {
          if (currentArr[i] > currentArr[j]) {
            let swap1 = currentArr[i];
            let swap2 = currentArr[j];
            currentArr[i] = swap2;
            currentArr[j] = swap1;
            setPrimaryArray([...primaryArray, currentArr]);

            let bar1 = document.getElementById(i).style;
            let bar2 = document.getElementById(j).style;
            // bar1.backgroundColor = "#DC143C";
            // bar2.backgroundColor = "#6A5ACD";

            await sleep(animationSpeed);

            // bar1.backgroundColor = "#FF7F50";
            // bar2.backgroundColor = "#FF7F50";

            sorted = false;
          }
        }
      }
      if (sorted) finishedAnimation();
    }
  };
  // Insertion Sort
  const insertionSort = async () => {
    let currentArr = primaryArray;
    let sorted = false;
    // setAlgorithm({ name: "Insertion Sort", timeComplexity: "O(n^2)" });

    while (!sorted) {
      sorted = true;

      for (let i = 1; i < currentArr.length; i++) {
        let current = currentArr[i];
        let j = i - 1;
        while (j >= 0 && currentArr[j] > current) {
          currentArr[j + 1] = currentArr[j];
          setPrimaryArray([...primaryArray, currentArr]);

          let bar1 = document.getElementById(j + 1).style;
          let bar2 = document.getElementById(j).style;
          // bar1.backgroundColor = "#DC143C";
          // bar2.backgroundColor = "#6A5ACD";

          await sleep(animationSpeed);

          // bar1.backgroundColor = "#FF7F50";
          // bar2.backgroundColor = "#FF7F50";

          j--;
          sorted = false;
        }
        currentArr[j + 1] = current;
        setPrimaryArray([...primaryArray, currentArr]);
      }
      if (sorted) finishedAnimation();
    }
  };

  return (
    <div>
      <div className="header">
        <Button
          type="NEWARRAY"
          name="New Array"
          onClick={randomizeArray}
          disabled={!isAuthenticated}
        />
        <Button
          onClick={bubbleSort}
          type="SORT"
          name="bubble"
          disabled={!isAuthenticated}
        />
        <Button
          onClick={selectionSort}
          type="SORT"
          name="Selection"
          disabled={!isAuthenticated}
        />
        <Button
          onClick={insertionSort}
          type="SORT"
          name="insertion"
          disabled={!isAuthenticated}
        />
        {isAuthenticated ? (
          <button>
            {user.name} {user.profile}{" "}
          </button>
        ) : (
          ""
        )}
        {isAuthenticated ? (
          <button
            onClick={() =>
              logout({ logoutParams: { returnTo: window.location.origin } })
            }
          >
            Log Out
          </button>
        ) : (
          <button onClick={() => loginWithRedirect()}>LOG IN </button>
        )}
      </div>
      <div className="sortingBars">
        {primaryArray &&
          primaryArray.map((val, key) => {
            return (
              <div
                className="bars"
                id={key}
                key={key}
                style={{ height: val }}
              ></div>
            );
          })}
      </div>
      {/* {algorithm.name !== undefined && (
        <div className="algoInfo">
          <div>Algorithm: {algorithm.name}</div>
          <div>Time Complexity: {algorithm.timeComplexity}</div>
        </div>
      )} */}
    </div>
  );
};

export default Main;
