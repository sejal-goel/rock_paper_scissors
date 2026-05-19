import random 

def get_choices():
    player_choice=input("enter a choice rock paper scissors\n")
    options=["rock", "paper", "scissors"]
    computer_choice=random.choice(options)
    choices={"player":player_choice,"comp":computer_choice}
    return choices

def check_win(player, computer):
    print("you chose " +player+" and the computer chose " + computer)
    if player=="computer":
        return "It's a tie."
    elif player=="rock":
        if computer=="paper":
            return "\nYou lose :("
        else: 
            return "\nYou win!!"
    elif player=="paper":
        if computer=="scissors":
            return "\nYou lose :("
        else:
            return "\nYou win!!"
    elif player=="scissors":
        if computer=="rock":
            return "\nYou lose :("
        else:
            return "\nYou win!!"               

choices=get_choices()
p_ch=choices["player"]
comp_ch=choices["comp"]
response=check_win(p_ch , comp_ch)
print(response)