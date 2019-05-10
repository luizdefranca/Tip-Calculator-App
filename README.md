# Tip-Calculator-App

<h1>Tip Calculator App (P*) Assignment</h1>

Introduction

In this assignment you are going to build a single view application that helps users calculate how much they should give as a tip on their food bill.

Setup

Create a new iOS project named: TipCalculator
Use the Single View template
Initialize it as a git repository and push it to github
Reminder: Remember to keep your remote (github) copy up to date by regularly committing and pushing.

MVP User Stories

1. As a user, I can enter a bill amount

Place a UITextField on to the view
Create an property on the view controller to represent the UITextField called billAmountTextField
2. As a user, I can calculate how much my tip should be

Place a UIButton onto the view and change the text to "Calculate Tip"
Create a method for the button called calculateTip
Have the calculateTip method work out what a 15% tip would be
3. As a user, I can see the amount I should tip

Add a UILabel to the view. It will be used to display the calculated tip amount, in dollars.
Create a property for the label called tipAmountLabel
Update the label after a tip has been calculated
4. As a user, I can enter a tip percentage

Add another UITextField to the view
Create an property for the UITextField called tipPercentageTextField


<h2>Stretch User Stories</h2>

You may have noticed that when you type in data into a UITextField the keyboard pops up. If the UITextField is at the bottom of the screen, when you touch it, the keyboard will cover up your textfield!

As a user, I want to see the Textfield after I press it...

Use Notification Center to get a notification when the keyboard shows. Move the screen up the size of the keyboard so that you are no longer hiding the textfield. (look up the keyboardWillShow notification)
As a user, I want to be able to easily adjust my tip percentage

Add A UISlider to the view
Create a method for the UISlider called adjustTipPercentage
Set the range of the slider to min 0 max 100
Update the tip percentage to the value of the slider
As a user, I don't want to have to press a button every time I change a field

make the text fields, and slider, update the calculated tip value whenever they are changed.
make the text fields, and slider, update the calculated tip value whenever they are changed.
