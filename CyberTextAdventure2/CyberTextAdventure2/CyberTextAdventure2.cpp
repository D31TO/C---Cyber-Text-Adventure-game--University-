// Imports/Includes
#include <string>
#include <iostream>
#include <cstdlib>
#include <chrono>
#include <thread>
#include "Inventory.h"

// namespace std so that I can use CIN and COUT
using namespace std;

int main()
{
	// Variable definition (Some might not be used ever)
	bool stinky = false;
	int dependant = 0;
	int deathcounter = 0;
	bool hurtarm = false;
	string yourname;
	string dogname;
	string croom;
	int roomnum = 0;
	bool leave = false;

	Inventory PlayerInventory;

	// Introduction with players name
	cout << "Welcome to my text adventure game!" << endl;
	cout << " " << endl;
	cout << "What is your name? " << endl;
	cin >> yourname;
	cout << endl;
	cout << "Hello " + yourname;
	cout << endl;
	cout << "Let the story begin.." << endl;
	cout << " " << endl;
	// Beggining of story
	cout << "You wake up in a pool of sweat on the floor of some random condo high up in the clouds of New Tech City." << endl;
	cout << "Head aching and feeling sick you get up, the dizzying continues to worsen and you feel like you are going to throw up." << endl;
	cout << endl;
	// First prompt
	cout << "Do you:" << endl;
	cout << "A - Run to the toilet to throw up" << endl;
	cout << "B - Run to the nearby open window to throw up" << endl;
	// Defining the decision string and allowing the player to make an input that then becomes the decision variable
	string decision;
	cin >> decision;
	// If statement using the operator || to say "or" so that the person inputing can use lower or upper case
	if (decision == "A" || decision == "a") {
		cout << "You run over to the nearest toilet you can find a few steps infront of you and empty the entire contents of your stomach into the toilet" << endl;
		cout << endl;
	}
	// If they didn't say A then they must mean B
	else if (decision == "B" || decision == "b") {
		cout << "You run over to the open window and poke your head out. You proceed to throw up everything inside you without realising the wind direction" << endl;
		cout << "The Vomit proceeds to fly through the window back in your face and cover you completely." << endl;
		cout << "*You now smell really really bad.*" << endl;
		stinky = true;
		cout << endl;
	}
	// If they don't get it then they aren't allowed to play my masterpiece
	else {
		cout << "Because you didn't play along you have to play the whole game again :)" << endl;
		exit(0);
		return 0;
	}
	// Removing the stinky
	if (stinky == true) {
		cout << "You walk to the bathroom to wash off the vomit from your face. (You now don't smell as bad.)" << endl;
		stinky = false;
		cout << endl;
	}
	// Dialogue with hotdog man
	cout << "After regaining your balance you proceed towards what you assume is a door leading to the way out." << endl;
	cout << "After you open the door you find a man just about to enter the room you were in. He says:" << endl;
	cout << "\"Yooooo duuuude, that party was craaazy last night! You see what happened to that girl?\"" << endl;
	cout << "You stand there staring at the man blankly." << endl;
	cout << "\"Siiiiick man yeah rad.... errr you want this cold hot dog I found?\"" << endl;

	// Hotdog decision
	cout << "Do you:" << endl;
	cout << "A - Take the (cold) Hot dog." << endl;
	cout << "B - DON'T Take the (cold) Hot dog." << endl;
	cin >> decision;

	// Decisioning (Idk if that is even a word)
	if (decision == "A" || decision == "a") {
		cout << "You politely hold out your hand and the strange man places a (cold) Hot dog in the palm of your hand." << endl;
		PlayerInventory.SetValue("HasDawg", true);
		cout << "The strange man says: ";
		cout << "\"Yeah bro rad I didn't wanna eat it anyway haha...\"" << endl;
		cout << "*You obtain one (cold) hot dog.*" << endl;
		cout << endl;
	}
	else if (decision == "B" || decision == "b") {
		cout << "You tell the man you don't want the hot dog and that he should probably throw it out." << endl;
		cout << "The strange man says:";
		cout << "\"Yeah bro ok never mind then, I might eat it later or something I don't know haha..\"" << endl;
		cout << endl;
	}
	else {
		cout << "Because you didn't play along you have to play the whole game again :)" << endl;
		exit(0);
		return 0;
	}
	// More story
	cout << "You walk out into the corridor and turn to your right and suddenly you hear a buzzing in your ears and your head is thumping" << endl;
	cout << "You think to yourself \"I better not have gotten another bloody virus\"" << endl;
	cout << endl;
	cout << "A screen pops up in your peripheral vision, it appears your old AntiVirus has picked up some malware but because of how old and crap it is, it cant remove it safely" << endl;
	cout << "This means you will need to locate a CyberDock to help remove it from your system" << endl;
	cout << endl;
	cout << "*You have a malware in your system and must find a CyberDock to remove it as soon as you can!*" << endl;
	cout << endl;

	// Apparently this piece of code will make my program stop working for the timer so I am not using it. Leaving it here for proof
	// 
	//while (dependant == 0) {
		//this_thread::sleep_for(chrono::seconds(1));
		//deathcounter++;
		//if (deathcounter == 20) {
			//cout << "The malware has taken over your body and you have died...." << endl;
			//exit(0);
			//return 0;

		//}
	//}


	// Lovely story writing
	cout << "You pop a quick pill and it makes the pain in your head better, although you now have a constant feeling of vertigo you go on your way." << endl;
	cout << "You head towards a futuristic elevator. All the elevators in this day and age use electro magnets for speed and better maintenance." << endl;
	cout << "Funnily enough for once this one is broken and is currently bbeing fixed. Although this isn't funny to you." << endl;
	cout << "You decide to pick up some pace and start lightly jogging towards the stairs. Waiting infront of you is a VERY VERY angry dog." << endl;
	cout << "A Cyber Pit Bull that seems to be reaaaallly pissed off." << endl;
	cout << endl;

	cout << "The dog growls at you angrily, you think it might want to kill you" << endl;
	cout << "You sigh and try and see if you can slip past but the dog growns once more showing it is not going to let you past" << endl;
	cout << endl;


	// The Hotdog effect
	if (PlayerInventory.GetValue("HasDawg")) {
		cout << "You rummage through your pockets and luckily find the (cold) hotdog from earlier" << endl;
		cout << "Do you:" << endl;
		cout << "A - Do you throw the hotdog at the dog." << endl;
		cout << "B - hold out the hotdog in your hand to feed it to the cyber pit bull." << endl;
		cin >> decision;
		if (decision == "A" || decision == "a") {
			cout << "You throw the hotdog at the pitbul and it distracts it for a second and then lunges towards it to feast on its cold hotdoggy-ness" << endl;
			cout << "While it is distracted you run down the stairs, it doesn't seem to chase after you." << endl;
			cout << endl;
		}
		else if (decision == "B" || decision == "b") {
			cout << "You grab the hotdog and lay it out on your palm, you then reach towards the dog, presenting it the hotdog" << endl;
			cout << "The dog growls for a second before quickly swiping the hotdog away from your hand. The dog seems content" << endl;
			cout << "The dog seems to follow you like it is your friend." << endl;
			cout << "*Cyber Pit Bull acquired*" << endl;
			cout << endl;
			PlayerInventory.SetValue("DogFriend", true);
		}
		else {
			cout << "Because you didn't play along you have to play the whole game again :)" << endl;
			exit(0);
			return 0;
		}
	}

	// The No Hotdog effect
	if (not PlayerInventory.GetValue("HasDawg")) {
		cout << "The dog snarls and as you rummage through your pockets you realise you haven't got anything you can use to distract the dog or get past it" << endl;
		cout << "You try to distract the dog by making noises and flailing your arms, but nothing seems to work. The dog has its eyes set on you." << endl;
		cout << endl;
		cout << "You recall you have a cheap piece of cyberware that allows you to boost power into your legs, this is good for running or assisted walking" << endl;
		cout << "But because your system is scrambled you cant tell what anything does" << endl;
		cout << "All of your apps have been scrambled into numbers from 1-8. Which number do you press?" << endl;
		int numberchoice;
		cin >> numberchoice;
		if (numberchoice == 4) {
			cout << "Congratulations, you picked the correct app. You charge up your cyber leg and kick the dog square in the face." << endl;
			cout << "You see the dog doing flips in the air as you send it flying. You are safe to proceed down the stairs." << endl;
			cout << endl;
		}
		else {
			cout << "Oh no, that didn't work." << endl;
			cout << "The dog runs at you and suddenly rips your leg off." << endl;
			cout << "You bleed out and die." << endl;
			cout << "GAME OVER." << endl;
			exit(0);
			return 0;

		}
	}

	// Chapter: Barry
	cout << "You start heading down the stairs. It is high up and you are dizzy so you take your time." << endl;
	cout << "You realise that the elevator was only broken on the top few floors, so you slow down slightly and try to think about what to do next." << endl;
	cout << "You have the option to either find a cyberdoc that is closest to you and risk your life in the hands of someone you don't know - A" << endl;
	cout << "Or you can spend the extra time trying to get to your trusty cyberdock Barry - B" << endl;
	cin >> decision;
	cout << endl << endl << endl << endl << endl << endl;

	// Randy the legend
	if (decision == "A" || decision == "a") {
		cout << "You decide to use your frazzled operating system to search for the nearest cyberrdoc." << endl;
		cout << "One earch pops up with 1.5 stars but it is only a 5 minute walk away." << endl;
		cout << "It's called: " << "\"Randy's rippers doctors surgery\"" << endl;
		cout << endl;
		cout << "You realise that doesn't look very promising, but because of the need you are in you run there anyway." << endl;
		cout << "Running along you trip and fall, this damages your arm badly." << endl;
		hurtarm = true;
		cout << "You proceed onward and realise that the doctors is in the same condo building you have been descending the stairs of this whole time, talk about luck!" << endl;
		cout << "You burst through the doors barely able to stand up" << endl;
		cout << "A croaky voiced man at the desk says: " << "\"Have you got an appointment to see the doctor sir?\"" << endl;
		cout << "You mumble at him that it is an emergency." << endl;
		cout << "The deskworker replies: " << "\"Sorry sir it is currently appointment only, Doctor Randy is very busy.\"" << endl;
		cout << endl;
		if (PlayerInventory.GetValue("DogFriend")) {
			cout << "You look behind you and see your cyberpitbull friend huffing at you and wagging its tail, it seems a little hungry" << endl;
			cout << "You realise the potential you have with this new found friendship to get you in that doctors chair" << endl;
			cout << "You say to the dog: " << "\"You hungry boy?\"" << endl;
			cout << "The dog starts barking and snarling at the desk worker" << endl;
			cout << "You say to the worker: " << "\"It appears my dog is hungry, would be a shame if we didn't make this appointment quick wouldn't it?\"" << endl;
			cout << "The worker replies: " << "\"Uhm- *Gulp* - C-certainly sir, right this way...\"" << endl;
			cout << endl;
			cout << "You walk down a dingy hallway towards one room that has \"practise\" written on the door." << endl;
			cout << "You and the walker barge in, the doctor doesn't seem busy." << endl;
			cout << "The doctor says: " << "\"What is this horseshit Jake? I told you I was fully booked today!\"" << endl;
			cout << "The worker: " << "\"S-sorry boss, this man needs to see you!\"" << endl;
			cout << "The dog snarls round the corner looking at the doctor." << endl;
			cout << "Doctor Randy: " << "\"Ahhh I see, well come on in. You are lucky I am not busy today. Take a seat\"" << endl;
			cout << "You sit down" << endl;
			cout << endl;
			cout << "The Doctor connects to your system and within seconds all of his alarm systems sound on his computer's monitor" << endl;
			cout << "The Doctor: " << "\"CHRIST ON A BIKE WHAT KIND OF MALWARE IS THAT?!\"" << endl;
			cout << "You chuckle to yourself. " << "You say to the doctor: " << "\"I don't know, all I know is its serious shit.\"" << endl;
			cout << "The Doctor: " << "\"Lucky for you, I have the stuff you need. Just give me a few minutes\"" << endl;
			cout << endl;
			cout << "Everything goes dark..." << endl;
			cout << "Then bang, you hear a buzzing in your ear getting loud and then it disappears." << endl;
			cout << "Your vision comes back. It is clear. The malware has been removed." << endl;
			cout << "You say: " << "\"Wow! Thanks doc!\"" << endl;
			cout << "The Doctor: " << "\"This ain't a charity. That was an expensive piece of software I used there, it ain't gonna be cheap.\"" << endl;
			cout << "You rummage arround in your pockets and find nothing.... SHIT" << endl;
			cout << "You notice in the corner of your eye, the dog has a credit chip in his mouth, you take it." << endl;
			cout << "You say: " << "\"Will this cover it?\" " << "You hand the doctor the chip." << endl;
			cout << "The Doctor: " << "\"Hmmm, with the software and the emergency fee, and for scaring the shit out of my desk worker... Sure. That covers.\"" << endl;
			cout << endl;
			cout << "You get up and walk out of the surgery, a waft of warm piss hovers over your top lip... Ahhh its good to feel back to normal again." << endl;
			if (PlayerInventory.GetValue("DogFriend")) {
				cout << "You look down and see your doggy friend, you realise you should probably give your dog a name, what should you call it?" << endl;
				cin >> dogname;
				cout << endl;
				cout << "You say " + dogname + " out loud and the dog barks in approval" << endl;
				cout << endl;
			}
			cout << "Now it's time to get home!" << endl;
			cout << "You take the nearest working elevator down to the bottom of the building, you are now on the streets and are wondering where you are and how to get home" << endl;
			cout << endl;

		}
		// No randy
		else if (not PlayerInventory.GetValue("DogFriend")) {
			cout << "You get angry with the worker and shout at them" << endl;
			cout << "The Worker says:";
			cout << "\"Please don't raise your voice at me sir.\"" << endl;
			cout << "You proceed to throw a lousy punch at the worker which makes you spin and fall on the ground." << endl;
			cout << endl;
			cout << "The police are called and you are arrested" << endl;
			cout << "GAME OVER!" << endl;
			exit(0);
			return 0;
		}
	}
	// Barry helps you out
	else if (decision == "B" || decision == "b") {
		cout << endl;
		cout << "You pull out your phone and clumsily manage to phone your doctor friend Barry" << endl;
		cout << "\"Heyyyy\" " + yourname + ", " << "\"how's it going? I haven't heard anything from you in ages! \"" << endl;
		cout << "You explain to Barry the situation" << endl;
		cout << "\"Holy shit, only you could manage that one on a night out! Come over, I think I can help.\"" << endl;
		cout << "As soon as you hear the c in come you hang up the phone, you start sprinting." << endl;
		if (PlayerInventory.GetValue("DogFriend")) {
			cout << "Your dogfriend is struggling to keep up, you lean down and pick the dog up under your armpit and really start picking up the pace down the stairs" << endl;
		}
		cout << "You finally make it to the bottom of the building, it feels like you have been in there forever!" << endl;
		cout << "You get dizzy and manage to hail a taxi before you pass out..." << endl;
		cout << "In a haze you realise you haven't told the driver where to take you, you blurt \"Bazzaaaa\" " "and loose conciousness completely" << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << "Approximately 1 hour later...." << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << "\"Hey. Hey. HEY. OI YA LAZY BASTARD!\"" << endl;
		cout << "You wake up" << endl;
		cout << "\"Wakey wakey sunshine, I swear you are heavier than last time I had to pick you up. But that was years ago so hey ho\"" << endl;
		cout << "It's barry, you recognise you are in his shop room" << endl;
		cout << "You sit up to hug him but suddenly get dizzy and lay back down again" << endl;
		cout << "\"Yeah you will feel quite sick. While you were asleep I managed to figure out what was wrong and I tell you what it was a shoddy job\"" << endl;
		cout << "\"But... Other than being a bit busy you should be ok now!\"" << endl;
		cout << "\"I'll say you don't owe me anything, we will just call quits on the favour you did me a few months ago....\"" << endl;
		cout << "*The air goes stale from awkwardness*" << endl;
		cout << "*VIRUS REMOVED*" << endl;
		if (PlayerInventory.GetValue("DogFriend")) {
			cout << "\"Erm, that dog that was with you is currently waiting outside, pets aren't allowed in here for hygeine and stuff. I think its still there.\"" << endl;
		}
		cout << "\"Aaaanyway, I am sure you have somewhere to be... haha\"" << endl;
		cout << "You get up and give Barry a hug " << "You say: " << "\"Thanks Barry, you are literally a life saver!\"" << endl;
		cout << "\"That's alright mate! Glad I could be of use. Just make sure you tell your friends about me ya hear?\"" << endl;
		cout << "You walk out the doctors surgery and are now on a random street in the city." << endl;
		cout << endl;
		if (PlayerInventory.GetValue("DogFriend")) {
			cout << "You look down and see your doggy friend waiting, you realise you should probably give your dog a name, what should you call it?" << endl;
			cin >> dogname;
			cout << endl;
			cout << "You say " + dogname + " out loud and the dog barks in approval" << endl;
			cout << endl;
		}
		cout << "Now to try and find a way home" << endl;


	}
	else {
		cout << "Pick right next time. Loser :(" << endl;
		exit(0);
		return 0;
	}

	// Get home now
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "You decide to call a taxi to get home" << endl;
	cout << "You pull out your phone and dial the JAIMBO Taxi Company (A driverless car that is driven by an AI named JIMBO" << endl;
	cout << "\"Hi! This is JAIMBO Taxi Company, Would you like us to send a taxi to your location?\"" << endl;
	cout << "You say yes" << endl;
	cout << "\"Ok Sir, one is on the way.\"" << endl;
	cout << "You stand on the sidewalk tapping your foot and whistling.." << endl;
	cout << endl;
	cout << endl;
	cout << "*23 MINUTES LATER*" << endl;
	cout << endl;
	cout << endl;
	cout << "A car comes screeching round the corner, it's your taxi" << endl;
	cout << "It stops infront of you and a door swings open. You hear: \"Please enter the vehicle.\"" << endl;

	cout << "You get inside the taxi ";
	if (PlayerInventory.GetValue("DogFriend")) {
		cout << "and " + dogname + " hops in with you." << endl;
	}
	cout << endl;
	cout << "The door closes behind you" << endl;
	cout << "\"Where would you like to go sir?\" JIMBO the ai on the screen says to you." << endl;
	cout << "You say: \"The flats on Oakbridge street please.\"" << endl;
	cout << "\"Certainly!\" The car blurts back at you." << endl;
	cout << "The car wizzes into gear and starts moving" << endl;
	cout << "You feel relaxed and lay your head back onto the head rest." << endl;
	if (PlayerInventory.GetValue("DogFriend")) {
		cout << dogname + " rests his head on you." << endl;
	}
	// Sleepy time
	cout << "You fall asleep...." << endl;
	
	if (PlayerInventory.GetValue("DogFriend")) {
		cout << "You feel a big crash and wake up in a panic" << endl;
		cout << "The AI screen is glitch but it manages to become stable." << endl;
		cout << "\"Finally! You are awake. We are being attacked by two cars, I am not able to identify who they are but I have informed the-\"" << endl;
		cout << "The car suddenly veers off the road and flips, you go unconcious..." << endl;
		cout << endl;
		cout << endl;
		cout << "You slowly come to, " + dogname + " is nowhere to be seen..." << endl;
		cout << "The door comes flying off of the taxi" << endl;
		cout << "You hear a voice say: \"So you're the bastard that stole our dog..\"" << endl;
		cout << "You say: \"Oh no...\"" << endl;
		cout << "A big metal arm reaches in the car and flings you out." << endl;
		cout << "The mysterious man is well dressed and is clearly very wealthy. They are holding " + dogname + " in his arms. He says: \"Who sent you to steal my precious Bruce!\"" << endl;
		cout << "You say: \"No one, No one did. I just gave him a bloody ho- \"" << endl;
		cout << "You get hit in the head and go unconcious" << endl;

		cout << "*An unknown amount of time later*" << endl;

		//You stole the poor man's dog
		cout << endl;

		cout << "You come too and you are in a warehouse tied to a chair. It is dark and only lit by a small bulb. You see the man from earlier infront of you." << endl;
		cout << "He says: \"Right mate. You have been payed to steal my dog and I have to find out who. Its nothing personal but tell me. Or you will be shitting teeth for a week.\"" << endl;
		cout << "You say: \"I don't know how many times you want me to say it. I wasn't paid to take him and no one told me to!\"" << endl;
		cout << "The man says: \"And why should I belive you? AHH-\"" << endl << dogname + " bites the mans leg" << endl;
		cout << "\"BRUCE. WHAT ARE YOU DOING?!\"" << endl;
		cout << dogname + " rips the mans leg off and then runs over to you to chew the rope off." << endl;
		cout << "The man shouts: \"NO BRUCE PLEASE. I'LL GIVE YOU MORE BEEF FOR DINNER!\"" << endl;
		//Non linear exploration of warehouse
		while (!leave) {
			while (roomnum == 0) {
				cout << "You decide to explore the warehouse to see if you can get any goodies." << endl;
				croom = "Main Room";
				cout << "You are in the " << croom << endl;
				cout << "Do you go forwards, backwards, or leave?" << endl;
				cin >> decision;
				if (decision == "forwards" || decision == "Forwards") {
					roomnum = roomnum + 1;

				}
				else if (decision == "backwards" || decision == "Backwards") {
					roomnum = roomnum - 1;
				}
				else if (decision == "leave" || decision == "Leave") {
					leave = true;
					break;
				}
			}
			while (roomnum == 1) {
				croom = "Store Room";
				cout << "You are in the " << croom << endl;
				cout << "Do you go forwards, backwards, or leave?" << endl;
				cin >> decision;
				if (decision == "forwards" || decision == "Forwards") {
					roomnum = roomnum + 1;

				}
				else if (decision == "backwards" || decision == "Backwards") {
					roomnum = roomnum - 1;
				}
				else if (decision == "leave" || decision == "Leave") {
					leave = true;
				}
			}
			while (roomnum == 2) {
				croom = "Crate Room";
				cout << "You are in the " << croom << endl;
				cout << "Do you go forwards, backwards, or leave?" << endl;
				cin >> decision;
				if (decision == "forwards" || decision == "Forwards") {
					roomnum = roomnum + 1;

				}
				else if (decision == "backwards" || decision == "Backwards") {
					roomnum = roomnum - 1;
				}
				else if (decision == "leave" || decision == "Leave") {
					leave = true;
				}
			}
			while (roomnum == -1) {
				croom = "Front office";
				cout << "You are in the " << croom << endl;
				cout << "Do you go forwards, backwards, or leave?" << endl;
				cin >> decision;
				if (decision == "forwards" || decision == "Forwards") {
					roomnum = roomnum + 1;

				}
				else if (decision == "backwards" || decision == "Backwards") {
					roomnum = roomnum - 1;
				}
				else if (decision == "leave" || decision == "Leave") {
					leave = true;
				}
			}
			if (roomnum < -1) {
				leave = true;
			}
			if (roomnum > 2) {
				leave = true;
			}
		}

		cout << "You follow " + dogname + " out of the building." << endl;
		cout << "You recognise the area. It is only a quick walk away from your flat." << endl;
		cout << "You and " + dogname + " walk back to your flat. You get into bed and go to sleep." << endl;
		cout << endl;
		cout << "You and " + dogname + " live happily ever after" << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << "YOU WIN! GAME OVER! THANK YOU FOR PLAYING :)" << endl;
		exit(0);
		return 0;
	}
	//Don't pay we take it away... or something
	else if (not PlayerInventory.GetValue("DogFriend")) {
		cout << "\".... HEY WAKE UP\"" << endl;
		cout << "You jolt awake" << endl;
		cout << "You realise you are outside of your house and JIMBO was the one shouting at you" << endl;
		cout << "You go to open the door and its locked." << endl;
		cout << "\"You need to pay dude.\"" << endl;
		cout << "You say: \"Oh damn yeah ok my bad..\"" << endl;
		cout << "You rummage around in your pockets and realise you have no money or anything to give." << endl;
		cout << "A countdown begins. Counting down 1 each second from 100" << endl;
		cout << "You say: \"I don't have any money. There must be some other way I can pay you? Or can I give you like an IOU or something?\"" << endl;
		cout << "JIMBO says: \"It states in the terms and conditions that payment is needed on arrival unless prepaid and if not then you pay via EVISCERATION\"" << endl;
		cout << "You say: \"Evisceration?\"" << endl;
		cout << "JIMBO: \"Your body will be immediately hit with hot lasers and turned into mulsh that then gets fed into the engine as fuel...\"" << endl;
		cout << "You say: \"WTF ARE YOU CRAZY?!\"" << endl;
		cout << "JIMBO: \"Sorry sir. It is just business\"" << endl;
		cout << "The counter starts counting down the last 20 seconds..." << endl;
		cout << "You try to think of a way out of this..." << endl;
		cout << "JIMBO: \"Okokok. I'll stop the timer. If you can guess the number I am thinking of between 1 and 100, I won't kill you.\"" << endl;
		cout << "You start thinking..." << endl;
		cout << "You say: ";
		int thefinal;
		cin >> thefinal;
		if (thefinal == 69) {
			cout << endl;
			cout << "JIMBO says: \"Oh... I didn't think you would get it.\"" << endl;
			cout << "The door unlocks and opens" << endl;
			cout << "You say: \"69?! Really? You picked that number to wager my life on...\"" << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << "YOU WIN! GAME OVER! THANK YOU FOR PLAYING :)" << endl;
			exit(0);
			return 0;
		}
		else {
			cout << "WRONGGGG\"" << endl;
			cout << "You get vaporised into mush. You died." << endl;
			cout << "GAME OVER!" << endl;
			exit(0);
			return 0;
		}



	}
}


