## Connect to AutoGrader-0.1 Repo

1. http://help.github.com/win-set-up-git/
Follow instructions from step 4. 

You must log in to GitHub and access the AcademyAutograder Area.
If you are asked to login, I hope you remember your username and password you gave me a few months ago.
The username was the name of the email account you gave me.

2.In Git Bash, type: 

cd [Enter the Directory where you want to put your copy of the repo]

git clone git@github.com:AcademyAutograder/Autograder-0.1.git

(This creates a folder called Autograder-0.1 in the directory you chose, and will download all files from GitHub that are necessary)


## Make Changes to the Repo

Once you have made revisions, additions, or deletions to the files in the repo, you will need to commit to the Repository:
In Git Bash type:

cd [Enter the Directory name of the Repo on your computer] 	//Takes you to the directory

git add . 							//Adds all new or modified files to the staging area. The "."
								//includes all files in the directory

git commit -m "[Enter a short description of the changes made]"	//Commits files to the repository, with a message attached

git push							//If you are connected to the Internet, this pushes all of the
								//revisions to the repo locally to GitHub's copy

								//**NOTE** If the copy on your system before the push is older than
								//the copy on GitHub, things will get F*cked up, so make sure 
								//you pull a copy from GitHub before you commit and push.

**Git Bash will now prompt you for a passphrase. If you start typing and can't see any text, don't be alarmed - the text is hidden. 
**The passphrase is: middlesexcountyacademy
**Enter it exactly, with correct case. It's a passphrase, so I hope you know what to do.

**After this step, the files will start transferring to the GitHub repo. Don't screw around with anything at this point.

## Removing files and directories

If you want to delete a file or directory from your local repo, DON'T DELETE IT THE NORMAL WINDOWS WAY!!!!!!!!
Instead do this:

If it's a single file, type:
git rm [filename] -r

If it's an entire directory, type:
git rm [directory_name]/* -r					//The "*" incorporates all of the subfiles and subfolders

## Pulling from the repo

Before you make any commits to your repo or GitHub's repo, pull from GitHub to get the latest version. Type:

git pull
