# rebecca

Reverse Engineering BlackCipher

Author: [f-ve](https://github.com/f-ve)


About
===
Is the new anti hack security application developed by Nexon. After, ditching HackShield, Nexon has been looking at following Webzen's model of publishing XignCode. Nexon decided to make their own version, Nexon Game Security. NGS, or better known as BlackCipher however, like XignCode, is a threat to personal privacy while gaming. BlackCipher while running, can be seen scanning, logging, and sending notes about anything you are doing on your computer to Nexon's servers. It will log ip addresses, workgroups, windows versions, passwords, network credentials, hardware, hosts, libraries, current tabs in browsers, windows dialog, files, and more.
![](https://i.imgur.com/k1gMuHb.png)
![](https://i.imgur.com/Eevka8t.png)
![](https://i.imgur.com/VfiyO9O.png)
An intrusive logging system is however a bad idea. BlackCipher uses Crypto++'s RSA to encrypt files and communications. Hijacking a target application with Crypto++ RSA can be seen in my other project [captain-hook](https://github.com/f-ve/captain-hook). The dangers of this security is stealing logs and data collected by BlackCipher. It is possible for malicious threat groups in the hacking and gaming community to start appearing and terrorizing the community. Popular sites like (gamersoul.com, gamekiller.net) could gather a large amount of information about clients computers to gain additional profits from users in the game.


Goal
===
The goal of rebecca is to look at how BlackCipher functions. This is an opened source project to create a transparency of BlackCipher. Any tricks on bypassing BlackCipher will be documented for the greater good of the community in the /notes/ folder.
