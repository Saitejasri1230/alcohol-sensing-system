import time
import random

def read_alcohol_sensor():
    # Simulated sensor values
    return random.choice(["SAFE", "DETECTED"])

def control_engine(status):
    if status == "DETECTED":
        print("Alcohol Detected! Engine Locked")
    else:
        print("Safe Condition. Engine Running")

def main():
    print("Alcohol Sensing System Started...\n")

    while True:
        status = read_alcohol_sensor()
        print(f"Sensor Status: {status}")

        control_engine(status)

        print("-" * 30)
        time.sleep(2)

if __name__ == "__main__":
    main()