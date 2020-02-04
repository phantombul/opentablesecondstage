CODE-KATA-Shopping-Cart

This is a supermarket chekout program which takes in information from the user about the items that have been purchased and applies the discounts if there are any avaliable, adds everything up and prints the total sum to the terminal. The project was made using C++ 11.


int countA, countB, countC, countD, total;
This line of code is for declaration of all ints

cin >> input;
Takes in a value entered by the user and assigns it to the string called input.


    for (int i = 0; i < input.size(); i++) {
        if (input[i] == 'A' || input[i] == 'a') {
            ++countA;
        } else if (input[i] == 'B' || input[i] == 'b') {
            ++countB;
        } else if (input[i] == 'C' || input[i] == 'c') {
            ++countC;
        } else if (input[i] == 'D' || input[i] == 'd') {
            ++countD;
        }
    }
   
    
   In this for loop, we go through the "input" variable, letter by letter and check if it is equal to one of the options and if so, it increases the counter for that option.
   
    
    cout << "A: " << countA << endl;
    cout << "B: " << countB << endl;
    cout << "C: " << countC << endl;
    cout << "D: " << countD << endl; 
    
  So this block of code prints out the totals of the counts of all the possible inputs
  
    
    
    if (countA % 3 == 0) {
        total += 43.34 * countA;
    } else if (countA % 3 !=0) {
        total += ((43.34 * (countA - countA%3)) + (50 * (countA % 3)));
    }
    
    
  This block of code above, adds to the total value the cost of an item when the sales conditions are applied. We can find this by dividing 130 by 3. If we have a number that doesn't divide by 3 without a remainder, we first multiply 43.34 (the price of one item A with a discount) by the amount of numbers that have this discount. Later we add the number of items that sell at a default price and then we multiply them by the amount of items that are sold at a default price.
    

    if (countB % 2 == 0) {
        total += 37 * countB/2;
    } else if (countB % 2 !=0) {
        total += (countB%2 * 30 + ((countB - countB%2)/2) * 37);
    }
    
  The block above uses the number of items B purchased in order to determine whether to apply the discount or not. If the number can be divided without a remainder, we just multiply the number of items divided by 2, by 37 (which is the price of the item when the offer conditions are applied). If we have a number that doesn't divide by 2 without a remainder, we first multiply 30 (the price of default item without a discount) by the amount of numbers that don't have this discount. Later we add the total amount of item B minus the amount of items that have discounts divided by 2 and multiplied by the offer price. 
  
  
    total += 20 * countC + 10 * countD;
    
   Here we add items C and D to the total if there are any and we don't need the if part as there are no offers.
   
   
    cout << "Total: " << total << endl;
    
   We print out the total amount to the terminal.
