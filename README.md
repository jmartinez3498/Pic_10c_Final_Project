# Pic_10c_Final_Project

# 5/19/2020
Starting programming project. Reading up on what Qt is.
Reading tutorial on QT https://wiki.qt.io/Qt_for_Beginners
Downloaded qt, decided to go for open source version

# 5/26/2020 Update
Well I finally figure out how to set up qt with version control and create an actual README. 
I just followed what other people in the Pic 10c groupchat did to set up qt. Although I kept 
getting an error when trying to push my commits to github which I figured out was caused because
of the option to create a README through github itself. I followed https://techoverflow.net/2017/08/09/how-to-solve-git-fatal-no-configured-push-destination/
and https://stackoverflow.com/questions/37937984/git-refusing-to-merge-unrelated-histories-on-rebase
to fix the problem

# 5/29/2020 Update
So for my project I am trying to create Conway's game of life on Qt. I am catching up with all
the lecture material right now. From my understanding of Qt, I think I will be using a grid of
square buttons that interact with each other based on the rules of the game.

The rules can be found here: https://en.wikipedia.org/wiki/Conway%27s_Game_of_Life

I think it would be cool to use sprites for the buttons. First I will try to make 2 buttons
interact with each other which can then be expanded to more buttons. Need too find an 
appropriate button to use.
One problem I might run into is connecting buttons with other buttons because they should
be a lot of buttons/squares to play the game whcih might make this complicated.
I also need a start/stop button, and I need to figure out how often the bottons/squares will
be updating and if I can change that. Based on a suggestion from lecture, I might just have a 
button update the connections each time the button is pressed.

# 6/13/2020 update
I am trying to create my own button because I don't like what the default look like.
Read these tutorial/guides
https://doc.qt.io/qtcreator/quick-buttons.html
https://doc.qt.io/qt-5/stylesheet-examples.html
https://forum.qt.io/topic/110425/how-to-use-dynamically-created-buttons
https://doc.qt.io/qt-5/qtquick-effects-sprites.html
https://stackoverflow.com/questions/38761344/creating-buttons-on-button-click-in-qt
https://www.youtube.com/watch?v=GkzncJ71mm0
https://doc.qt.io/qtcreator/creator-project-creating.html
https://doc.qt.io/qtcreator/quick-signals.html
https://doc.qt.io/qt-5/qabstractbutton.html

I managed to create a square in the size that I wanted in a qml file, but I am not sure how to 
integreate it into my .ui file. From my understanding they are differnt applications and won't
be able to integrate
