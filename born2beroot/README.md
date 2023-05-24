# **BORN2BEROOT** [![fcorvaro's 42 Born2beroot Score](https://badge42.vercel.app/api/v2/clftrr31n000608jvhnng5zld/project/3069523)](https://profile.intra.42.fr/users/fcorvaro)

<a href="https://github.com/f-corvaro/42.common_core/tree/main/born2beroot"><img align="center" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/born2beroot_intra.png">

## Outcome

<p align="justify">
  
[![subject](https://img.shields.io/badge/subject-born2beroot-blueviolet)](https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/en.subject.pdf)

</p>

   ## Index

Introduction, Download the virtual machine ISO, Installing the VM (virtual machine), Installing Debian, VM setup 3.18 theory link, 
  
	
  ## 0 - Introduction
  
  <p align="justify">
    
 Born2beRoot is an introduction to virtualization and system administration. The purpose is to create a virtual machine which is a server implementing strict rules, and minimum required services.
    
  </p>

## 1 - Download the virtual machine ISO

  <p align="justify">
    
  [Debian ISO url](https://www.debian.org/download.en.html). I have chosen debian because is highly recommended in the subject.

  </p>
  
  ## 2 - Installing the VM (virtual machine)
  
<p align="justify">
  
In this tutorial we will use [Virtual Box](https://www.virtualbox.org/).

  1 | Open VirtualBox and click ```New```.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/1.png">

2 | Choose a name for the machine and the folder which will locate it. 
	
**IMPORTANT:** Store the machine created inside the goinfre folder located in your cluster server. This will avoid the run out of memory space in your session and avoid that the installation will fail. (Ask your staff if you can't find it). Then click ```continue```.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/2.png">

3 | Select the total RAM memory which we will reserve for the machine.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/3.png">

4 | Select the second option - ```create a virtual hard disk now```.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/4.png">

5 | Choose ```VDI``` option (we downloaded an ISO).

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/5.png">

6 | Select the ```Dynamically allocated``` option, it will allocate the memory of the physical machine as it feels necessary while using the virtual machine until we reach the available limit.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/6.png">

7 | Set ```30 GB```, because we are doing the bonus.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/7.png">

8 | Click on ```Settings```.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/8.png">

9 | Now click on ```Storage``` , again click on ```💿 Empty```. Click the ```💿``` in the line of "optical drive" and click ```Choose a disk file```.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/9.png">

10 | Select the ISO that we just downloaded and click ```Open```, then click on ```Ok```. 

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/10.png">

11 | Once all this steps have been completed we can ```Start``` our new virtual machine from VirtualBox.
  
</p>

## 3 - Installing Debian

<p align="justify">
  
Choose your scale rate to get window bigger or smaller: (I prefer 300%)

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/11.png">

The ```cmd``` key on your keyboard will help you to switch the capture of your mouse from vm to your system or viceversa.
  
**WARNING:** when you will switch from one to another, pay attention to change uppercase to lowercase or viceversa. This could be a common mistake that you wuold do and you would have problem with the input of the password, because the vm will remain at the old choice.

1 | We will choose the version without graphic interface ```Install``` (is a mandatory part of the subject). 
 
  To confirm something is used ```Enter key```.
  
  The ```Arrow keys``` are used to move around.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/12.png">

2 | Choose the language. Select ```English```.  

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/13.png">

3 | Select the country. If yours there isn't in the list, go to ```other```.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/14.png">

4 | Select your location (for me is Italy).

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/15.png">

5 | Select the configure locales, choose ```United States```.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/16.png">

6 | Select your keymap, I will choose ```American English```.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/17.png">

7 | Set a ```Host Name``` of the machine, must be your login followed by a 42.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/18.png">

8 | The ```Domain name``` must be blank until the subject will require it (see the version of the subject).

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/19.png">

9 | Go to *Show Password in Clear* and then press the ```Space bar```. Now set a strong password policy for the root user. **Save this password, will be useful**. Then you need to repeat the password to set.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/20.png">

10 | Set up the username. As is wrote in the subject, write your student login name. Then repeat

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/21.png">

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/22.png">
  
11 | Set our new user password. I will use the same password. Just as before, you need to repeat the process.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/23.png">

12 | Select ```Manual```. (Is required part for the bonus, so we can edit the partitions one by one)

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/24.png">

13 | It shows us a general description of our memory partitions and mount points. Currently, I don't have any partitions. To create a new partition, we must choose the disk where we want to create them. In our case, we will choose the only one available.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/25.png">

14 |  Accept the confirmation message. Basically, it warns us that if there are already partitions on the device, they will be deleted and if we are sure to create a new empty partition.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/26.png">

15 | Appears our partition table that is empty. Now we must configure it, for this we must select ```pri/log  32.2  GB FREE SPACE```

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/27.png">
  
16 | Create a new partition.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/28.png">
  
17 | I start with sda1, as the subject indicates, the size of the partition must be 500 megabytes.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/29.png">
  
18 | Choose the type of partition. We choose primary because it will be the partition where the operating system will be installed.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/30.png">
  
** Brief description of all types of partitions:**

◦ **Primary:** The only partition on which an OS can be installed. There can only be 4 primary partitions per hard drive or 3 primary and one extended.

◦ **Extended:** It was designed to break the 4 primary partition limitation on a single physical disk. An HDD may contain only one extended partition, but that extended partition can be subdivided into multiple logical partitions. It's used to contain logical partitions.

◦ **Logical:** It occupies a portion of the primary/extended partition or the whole of it, which has been formatted with a specific type of file system (in our case we will use ext4) and has been assigned a unit, so the operating system recognizes the logical partitions or its file system. There can be a maximum of 23 logical partitions in an extended partition, however, Linux (the OS we are currently working with), reduces it to 15, more than enough for this project.  
  
19 |   Select ```Beginning``` because we want that the new partition will be created at the beginning of the available space.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/31.png">

20 |  It shows the details of the partition. We will modify the mount point as specified in the subject.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/32.png">
  
Choose ```/boot```.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/33.png">

Finish configuring the current partition.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/34.png">
  
21 | Completed the previous step, the partition should already appear. Now we must create a logical partition with all the available space on the disk, which has no mount point and is encrypted. To do this, select the free space where we want to create it.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/35.png">
  
22 | Create a new partition.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/36.png">
  
Select the maximum size.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/37.png">
  
Select the type of partition, logical in this case.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/38.png">

Modify the mount point.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/39.png">
  
Choose the option ```Do not mount it```.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/40.png">
  
Finish configuring the current partition.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/41.png">
  
23 | Configure encrypted volumes, so we can encrypt our partition.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/42.png">
  
Accept the confirmation message.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/43.png">
  
Create the encrypted volumes.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/44.png">
  
Select which partition we want to encrypt.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/45.png">
  
Finish configuring the current partition.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/46.png">
  
```Finish``` because we don't want to create more encrypted volumes.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/47.png">

Accept the confirmation message. It tells us that everything inside the partition will be encrypted and it should not take long to finish.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/48.png">
  
```cancel``` it because there is nothing to encrypt (the partition is empty).
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/49.png">
  
Enter a password, this time it will be the encryption phrase.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/50.png">
  
24 | ```Configure the logical volume manager```.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/51.png">
  
Accept the confirmation message as we agree to save the changes to the disk.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/52.png">

```Create a new volume group```. 
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/53.png">
  
Enter the name we want to give it: ```LVMGroup``` as indicated in the subject.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/54.png">
  
Select the partition where we want to create the group: ```sda5_crypt```.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/55.png">
  
Create all the logical partitions as we requested from the subject. 

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/b.png">

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/56.png">
  
Choose the group where we want to create the logical partitions. We select the only one available (the one we created).

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/57.png">
  
The order of creation of the logical units must be the same of the subject, so we will start with ```root``` and end with ```var-log```. 
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/58.png">
  
Size, as indicated in the subject, will be ```10g```.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/59.png">
  
Repeat the process for all the seven logical volumes. Then continue with finish.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/60.png">
  
25 | Now we can see all our partitions and free space, all the logical partitions that we just created are already appearing. We must configure the mount point and the usage of these. Again we will go in order and select the first one that appears, which is ```home```.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/61.png">
  
We can see the configuration of the partitions. We must choose a file system as it currently does not have one.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/62.png">

Choose the ```Ext4 file system``` in use as option, it is the most commonly used file system in Linux distributions.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/63.png">
  
Then select the mount point as home.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/64.png">

And the first one is gone.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/65.png">
  
Now we need to repeat, to see what mount point I use and the use as, watch the image below that resume the final result:

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/66.png">

Accept the message and the changes will be saved. Make sure that all of the partitions look the same as in the screenshot.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/67.png">

Select the option ```No``` because we don't need additional packages.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/68.png">
  
Choose your Country.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/69.png">
  
Choose ```deb.debian.org```.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/70.png">

Leave this option empty and click ```Continue```.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/71.png">
  
 We selected the option ```No``` because we do not want that developers watch our statistics even though they are anonymous.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/72.png">

Remove all the software options using the spacebar and press ```Continue```.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/73.png">
  
Select ```Yes``` to install  [GRUB](https://es.wikipedia.org/wiki/GNU_GRUB) boot in the primary drive.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/74.png">
  
Choose the device for the bootloader installation ```/dev/sda```.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/75.png">
  
Press ```Continue``` to finish the installation.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/76.png">
  
</p>

## 4- VM setup 

<p align="justify">

### Boot - When the system boot 
  
  -> Select ```Debian GNU/Linux```.

### Boot - The system will require the password of the encrypted disk 
  
-> Write the encryptation password that previously we set. For me is ```Pw.20STNG!81```.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/77.png">

### Boot - The system will require the user and password that we created 
  
-> In my case the user is ```fcorvaro``` and the password is ```Pw.20STNG!81```.
  
<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/78.png">

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/79.png">
  
### 1 - Installing sudo & configuration of user and groups 

1 | The beginning of the installation starts with changing user to root so we can install sudo. For doing this write ```su -``` in the bash prompt and introduce the root password (for me ```Pw.20STNG!81```). Furthermore we will install [VIM](https://en.wikipedia.org/wiki/Vim_(text_editor)) to configure some files. 
Write the command 
  
```
$>apt-get update
$>apt-get install vim
$>apt install sudo
```

Verify whether _sudo_ was successfully installed via:

```
$>dpkg -l | grep sudo
```

2 | Adding User to _sudo_ Group

```
$>adduser <username> sudo
```

Alternatively, add user to sudo group via:

	$>usermod -aG sudo <username>

Verify whether user was successfully added to sudo group via:

	$>getent group sudo

`sudo reboot` for changes to take effect, then log in and verify sudopowers via `sudo -v`.

3 | Running root-privilege commands 

Run root-privileged command via prefix ```sudo```.

### 4.1 -   Installing & configuring SSH

SSH stands for "Secure Shell." The SSH protocol was designed as a secure alternative to unsecured remote shell protocols. It utilizes a client-server paradigm, in which clients and servers communicate via a secure channel.

1 | Update the system using ```sudo apt update```.

2 | Install the main tool for remote access with the SSH protocol, using OpenSSH. The packagerequired:

```sudo apt install openssh-server``` 

Confirm writing ```y```, and wait for the installation time.

```sudo service ssh status``` to check if the package was succesfully installed. **Active** is required to continue.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/80.png">

3 | Edit the file ```/etc/ssh/sshd_config```. If you are not on root you will not be able to edit the file; as you know, for switching to root we use ```su```.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/81.png">

4 | The ```#``` means that line it is commented. The lines that we will be edit have to be uncommented. Once we are editing the file we need to update the following lines:

+ ```#Port 22 -> Port 4242```

* ```#PermitRootLogin prohibit-password -> PermitRootLogin no```

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/82.png">

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/83.png">

Save the changes and leave the file.

5 | With the file ```/etc/ssh/ssh_config``` (not ```sshd_config```) we will do the same we do early. Edit the following line: 

+ ```#Port 22 -> Port 4242```

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/84.png">

6 | Restart the ssh service so it can be updated. Use ```sudo service ssh restart``` and once it is done we will check the service state with ```sudo service ssh status``` and confirm that everything is alright.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/85.png">

### 4.2 - Installing & configuring UFW 

[UFW](https://en.wikipedia.org/wiki/Uncomplicated_Firewall) is a [firewall](https://en.wikipedia.org/wiki/Firewall_(computing)) which use the command line for setting up [iptables](https://en.wikipedia.org/wiki/Iptables) using a small number of easy commands.

1 | Install the packages for UFW: ```sudo apt install ufw```and type ```y``` when is requested. The installation will proceed

2 | Start the UFW using the command ```sudo ufw enable``` and then it have to show us the *firewall is active.*

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/86.png">

3 | We must allow our firewall to accept the connections (that will happens in the 4242 port). Use ```sudo ufw allow 4242```. 

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/87.png">

4 | For checking if everything done is correct, we need to check the actual state of our firewall. Use ```sudo ufw status```.

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/88.png">

### 4.3 - Setting up the sudo policies 

1 | Create a file in ```/etc/sudoerd.d/```. The file will serve the purpouse of storing our sudo policy. Use: ```sudo touch /etc/sudoers.d/sudo_config```.

2 | We must create a directory, as is asked in the subject, in ```/var/log/``` because each commands need to be logged, the input and output. Use ```sudo mkdir /var/log/sudo```.

3 | Edit the file that we created in the first step of this section. Use ```sudo vim /etc/sudoers.d/sudo_config```.

4 | Write into the file the following lines:

```
Defaults  passwd_tries=3
Defaults  badpass_message="Mensaje de error personalizado"
Defaults  logfile="/var/log/sudo/sudo_config"
Defaults  log_input, log_output
Defaults  iolog_dir="/var/log/sudo"
Defaults  requiretty
Defaults  secure_path="/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/snap/bin"
```

As it should be:

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/89.png">

+ passwd_tries -> Total tries for entering the sudo password.

* badpass_message -> The message that will show when the password failed, can be customized.

* logfile	-> Path where will the sudo logs will be stored.

* log_input, log_output, iolog_dir  -> What will be logged.

* requiretty  -> [TTY](https://www.ibm.com/docs/en/aix/7.2?topic=t-tty-command) is required .

- secure_path	-> Folders that will be excluded of sudo
	
### 4.4 Setting up a strong password policy 

1 | Edit the login.defs file.

```sudo vim /etc/login.defs```

2 | Edit the file, set the parameters:

+ PASS_MAX_DAYS 99999 -> PASS_MAX_DAYS 30

* PASS_MIN_DAYS 0 -> PASS_MIN_DAYS 2

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/90.png">

PASS_MAX_DAYS: It's the max days till password expiration.

PASS_MIN_DAYS: It's the min days till password change.

PASS_WARN_AGE: It's the days till password warning.

3 | Install the package ```sudo apt install libpam-pwquality``` , then write ```Y``` when is required. Wait till it finish.

4 | Edit the file using ```sudo vim /etc/pam.d/common-password```. 

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/91.png">

5 | Immediately after ```retry=3```, add (in the same line) the commands:

```
minlen=10 ucredit=-1 dcredit=-1 lcredit=-1 maxrepeat=3 reject_username difok=7 enforce_for_root
```

<img width="650" src="https://github.com/f-corvaro/42.common_core/blob/main/born2beroot/screenshots/92.png">

+ minlen=10 -> The minimun characters a password must contain.

**- sign, that's refering to minumum caracters. + sign it refer to maximum characters.**
	
* ucredit=-1 -> The password at least have to contain a capital letter. 
	
* dcredit=-1 -> The password at least have to containt a digit.

* lcredit=-1 -> The password at least have to contain a lowercase letter.

* maxrepeat=3 -> The password can not have the same character repited three contiusly times.

* reject_username -> The password can not contain the username inside itself.

* difok=7 -> The password it have to containt at least seven diferent characters from the last password used. 

- enforce_for_root -> We will implement this password policy to root.

### 4.5 Connecting via SSH

1 ◦ If we want to connect via SSH we must close the machine and go to settings.

<img width="832" alt="Captura de pantalla 2022-07-18 a las 10 15 13" src="https://user-images.githubusercontent.com/66915274/179470948-d9a863ef-f1a3-41fb-a103-25378064e747.png">

2 ◦ Once there we will click on ```Network```, click on ```Advanced``` so it shows more options, then we click on ```Port fowarding```.

<img width="684" alt="Captura de pantalla 2022-07-18 a las 10 18 32" src="https://user-images.githubusercontent.com/66915274/179471690-cfbdbf4b-ab93-4b12-9504-2482712652a3.png">

3 ◦ Click on the emoji for adding a new rule.

<img width="585" alt="Captura de pantalla 2022-07-18 a las 10 21 24" src="https://user-images.githubusercontent.com/66915274/179471855-913a684d-c7b0-43e2-9e01-d2c954fe75a4.png">

4 ◦ Lastly we will add the ```4242``` port to host and client. The IP's are not required. We will click accept so changes can be saved.

<img width="588" alt="Captura de pantalla 2022-07-18 a las 10 22 29" src="https://user-images.githubusercontent.com/66915274/179472105-5942b3ec-5c29-4d49-a00e-67f9cde289e8.png">

➤ To connect via ssh from the machine to the virstual machine using and the use the command ```ssh <user>@localhost -p 4242```; it will ask for the password of the user that we are trying to log in. Once the password is introduced it will show or login in green, that will mean that the connections has been successfully.

<img width="517" alt="Screen Shot 2022-10-27 at 12 40 23 AM" src="https://user-images.githubusercontent.com/66915274/198174777-28f7793b-273b-43ce-b1c2-4a890353cb8c.png">

<img width="566" alt="Screen Shot 2022-10-27 at 12 40 04 AM" src="https://user-images.githubusercontent.com/66915274/198174814-c1873c62-41dd-4c1d-ad2d-f268b2da0e4c.png">

## 5- Script 🚨
  

</p>
## License

[![MIT License](https://img.shields.io/badge/License-MIT-green.svg)](https://choosealicense.com/licenses/mit/)
[![GPLv3 License](https://img.shields.io/badge/License-GPL%20v3-yellow.svg)](https://opensource.org/licenses/)
[![AGPL License](https://img.shields.io/badge/license-AGPL-blue.svg)](http://www.gnu.org/licenses/agpl-3.0)
