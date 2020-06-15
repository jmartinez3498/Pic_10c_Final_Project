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
be able to integrate.
I decided to just use a for loop to create a grid of push boxes. Now I have to figure out how to
connect all of them to behave based on the game of life rules.
Well I managed to create a grid of pushbuttons.
Okay so now I created them using a qlist of pushbox pointers which means I don't have to name
each pushbox to give it properties.

Read this tutorial on connections. And read through the ui.h file as I created what I wanted 
in the form file to check the code I needed.
https://doc.qt.io/qt-5/signalsandslots.html
Okay I figured out how to connect two buttons depending if one was pressed or not. I need to 
figure out how to delay the connection so you can click as many buttons as you want without
updating the button it is connected to. At least until you voluntarily are ready with your
setup.

Reading ways to delay the connection signal
https://www.qtcentre.org/threads/21999-How-to-delay-a-Signal
https://doc.qt.io/archives/qt-4.8/eventsandfilters.html
https://doc.qt.io/qt-5/qsignalmapper.html
https://doc.qt.io/archives/qq/qq10-signalmapper.html
https://forum.qt.io/topic/58645/solved-how-to-wait-in-a-proper-way-for-multiple-signals/8
https://forum.qt.io/topic/15743/solved-multiple-signals-and-single-slot/5

From my reading I've decided to create an event called start. It would allow you to push as many 
buttons as you want to create your grid setup while not allowing for other buttons to be 
updated. Then when you are ready, you would press the start button and then the buttons in the 
grid would update normally to create the game of life simulation.

# 6/14/2020
Okay so I am implementing the event system
Read these guides:
https://stackoverflow.com/questions/35826770/qt-no-such-slot-although-there-is
https://stackoverflow.com/questions/48363918/qobjectconnect-no-such-slot-on-qt
https://stackoverflow.com/questions/31074126/qobjectconnect-no-such-slot
https://stackoverflow.com/questions/15570415/what-is-the-difference-between-qcheckboxtoggled-and-qcheckboxclicked
https://stackoverflow.com/questions/42658994/check-when-a-button-is-clicked-event-qt
https://stackoverflow.com/questions/44950557/in-qt-how-can-i-delay-a-member-functions-return-until-a-signal-is-received
I kept running into an issue where my signal was being recieved. I found out that the signals
have to be of the same signurature type.
Well I sort of created a start button. I just creates the connections between buttons once the
start button is pressed.
Well I ran into a problem using buttons and signals. If I connect two buttons such that if one 
is pressed, and turns on the other, which then turns off the other, the application crashes.
I have no idea how to fix it based on what I have been reading. You can see it for yourself,
I made two pushbuttons with these connections in the bottom right. Clicking one of them crashes
the program. I was kind of hopping it wouldn't crash, but oh well.
I did get my start button to work. You can test it out. The top-left most button is connected to
the button directly right of it. However, it only sends the signal once the start button is 
pressed.

I also managed to find qt application code for the game(which I did not use!) because I am 
curious to how they managed to implement it. They don't actually use pushbuttons like I did.
They seem to use some sort of matrix, but to be honest I'm not really sure how it works. I 
don't understand how creating a matrix and using the paint functions will create a graphic.
I also dont understand how they update each iteration. 
https://doc.qt.io/archives/3.3/life-example.html

At this point, I don't really see anything else I can add. If I were to continue my project from
this point, I would probably restart and look for a new way to implment a grid of boxes.


