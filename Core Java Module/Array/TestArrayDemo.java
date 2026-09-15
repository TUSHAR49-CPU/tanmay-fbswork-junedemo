
import java.util.Scanner;


class TestArrayDemo{

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int choice;

        do {

            System.out.println("\n===== ARRAY PROGRAMS =====");
            System.out.println("1. Display Alternate Elements");
            System.out.println("2. Check Even/Odd Elements");
            System.out.println("3. Merge Two Arrays");
            System.out.println("4. Find Maximum and Minimum");
            System.out.println("5. Find Prime Numbers");
            System.out.println("6. Reverse Array");
            System.out.println("7. Search Element");
            System.out.println("8. Sort Array Ascending and Descending");
            System.out.println("9. Sum of Array Elements");
            System.out.println("10. Add Two Arrays");
            System.out.println("11. Copy Array");
            System.out.println("12. Second Maximum Element");
            System.out.println("0. Exit");

            System.out.print("Enter your choice: ");
            choice = sc.nextInt();

            switch (choice) {

                case 1:{
                    int[] arr = {1, 2, 34, 5, 56};

                    System.out.println("Alternate Elements in array are:");

                    for (int i = 0; i < arr.length; i += 2) {
                        System.out.println(arr[i]);
                    }
                    break;
				}

                case 2:{
                    int[] arr = {1, 2, 34, 5, 56};

                    for (int i = 0; i < arr.length; i++) {

                        if (arr[i] % 2 == 0)
                            System.out.println("Element is Even " + arr[i]+ ", Index: " + i);
                        else
                            System.out.println("Element is Odd " + arr[i]+ ", Index: " + i);
                    }
                    break;
				}

                case 3:{
                    int[] arr = {1, 2, 3, 4, 5, 6, 345, 356, 312, 56};
                    int[] brr = {1, 23, 44, 5, 67};

                    int[] crr = new int[15];

                    int size1 = 10;
                    int size2 = 5;
                    int k = 0;

                    for (int i = 0; i < size1; i++) {
                        crr[k] = arr[i];
                        k++;
                    }

                    for (int i = 0; i < size2; i++) {
                        crr[k] = brr[i];
                        k++;
                    }

                    System.out.println("Merged Array:");

                    for (int i = 0; i < 15; i++) {
                        System.out.print(crr[i] + " ");
                    }

                    System.out.println();
                    break;
				}

                case 4:{
                    int[] arr = {1, 2, 34, 34, 100, 67, 98};

                    int max = arr[0];
                    int min = arr[0];

                    for (int i = 0; i < arr.length; i++) {

                        if (arr[i] > max)
                            max = arr[i];

                        if (arr[i] < min)
                            min = arr[i];
                    }

                    System.out.println("Max Element is: " + max);
                    System.out.println("Minimum Element is: " + min);
                    break;
				}

                case 5:{
                    int[] arr = {15, 2, 13, 4, 56, 17};

                    System.out.println("Prime Numbers are:");

                    for (int i = 0; i < arr.length; i++) {

                        int num = arr[i];
                        int flag = 0;

                        if (num < 2) {
                            continue;
                        }

                        for (int j = 2; j < num; j++) {

                            if (num % j == 0) {
                                flag = 1;
                                break;
                            }
                        }

                        if (flag == 0) {
                            System.out.println(arr[i]);
                        }
                    }
                    break;
				}

                case 6:{
                    int[] brr = {10, 20, 30, 40, 50};

                    for (int i = 0; i < brr.length / 2; i++) {

                        int temp = brr[i];

                        brr[i] = brr[brr.length - 1 - i];

                        brr[brr.length - 1 - i] = temp;
                    }

                    System.out.print("Reverse Array = [");

                    for (int i = 0; i < brr.length; i++) {
                        System.out.print(brr[i] + " ");
                    }

                    System.out.println("]");
                    break;
				}

                case 7:{
                    int[] arr = {76, 456, 73, 235, 56, 78};

                    System.out.print("Enter element to be searched: ");
                    int search = sc.nextInt();

                    int found = 0;

                    for (int i = 0; i < arr.length; i++) {

                        if (arr[i] == search) {

                            System.out.println(
                                    "Element Found at index " + i);

                            found = 1;
                            break;
                        }
                    }

                    if (found == 0)
                        System.out.println("Element not Found");

                    break;

				}
                case 8:{
                    int[] brr = {123, 324, 635, 234, 776, 543};

                    // Ascending order
                    for (int i = 0; i < brr.length; i++) {

                        for (int j = i + 1; j < brr.length; j++) {

                            if (brr[i] > brr[j]) {

                                int temp = brr[i];

                                brr[i] = brr[j];

                                brr[j] = temp;
                            }
                        }
                    }

                    System.out.print("Sort Array by min to max = [");

                    for (int i = 0; i < brr.length; i++) {
                        System.out.print(brr[i] + " ");
                    }

                    System.out.println("]");

                    // Descending order
                    for (int i = 0; i < brr.length; i++) {

                        for (int j = i + 1; j < brr.length; j++) {

                            if (brr[i] < brr[j]) {

                                int temp = brr[i];

                                brr[i] = brr[j];

                                brr[j] = temp;
                            }
                        }
                    }

                    System.out.print("Sort Array Max to Min = [");

                    for (int i = 0; i < brr.length; i++) {
                        System.out.print(brr[i] + " ");
                    }

                    System.out.println("]");
                    break;
				}

                case 9:{
                    int[] arr = {12, 32, 34, 65, 67, 90, 78};

                    int sum = 0;

                    for (int i = 0; i < arr.length; i++) {
                        sum = sum + arr[i];
                    }

                    System.out.println(
                            "Sum of Elements in Array: " + sum);

                    break;
				}

                case 10:{
                    int[] arr = {1, 2, 3, 4, 5};
                    int[] brr = {10, 20, 30, 40, 50};

                    int[] sumcrr = new int[5];

                    for (int i = 0; i < arr.length; i++) {
                        sumcrr[i] = arr[i] + brr[i];
                    }

                    System.out.print("Sum Array = [");

                    for (int i = 0; i < sumcrr.length; i++) {
                        System.out.print(sumcrr[i] + " ");
                    }

                    System.out.println("]");

                    break;
				}

				case 11: {
					int[] brr = {12, 213, 43, 45, 75, 687, 98, 54};

					System.out.println("Original Array:");

					for (int i = 0; i < brr.length; i++) {
						System.out.print(brr[i] + " ");
					}

					System.out.println();

					int[] crr = new int[brr.length];

					for (int i = 0; i < brr.length; i++) {
						crr[i] = brr[i];
					}

					System.out.println("Copied Array:");

					for (int i = 0; i < crr.length; i++) {
						System.out.print(crr[i] + " ");
					}

					System.out.println();

					break;
				}
				
				case 12:
				{
					int[] arr = {10, 25, 45, 67, 34, 89, 56};

					int max = arr[0];
					int secondMax = arr[0];

					for (int i = 1; i < arr.length; i++) {

						if (arr[i] > max) {
							secondMax = max;
							max = arr[i];
						}
						else if (arr[i] > secondMax && arr[i] != max) {
							secondMax = arr[i];
						}
					}

					System.out.println("Maximum Element: " + max);
					System.out.println("Second Maximum Element: " + secondMax);

					break;
				}
                case 0:
                    System.out.println("Program Ended.");
                    break;


                default:
                    System.out.println("Invalid Choice!");
            }

        } while (choice != 0);

        sc.close();
    }
}
