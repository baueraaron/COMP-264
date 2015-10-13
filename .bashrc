# When an interactive shell that is not a login shell is started, bash
# reads and executes commands from /etc/bash.bashrc and ~/.bashrc, if
# these files exist.

# The standard /etc/profile on our system for login shells actually
# also sources /etc/bash.bashrc , and if you've copied my recommended
# ~/.bash_profile for login shells, that sources ~/.bashrc .  So I
# recommend that you copy this file to your ~/.bashrc to execute its
# content for *all* interactive shells.

# With this setup, though, you have to be careful about some
# apparently interactive shells such as scp and rcp that can't
# tolerate any output.  The immediately following code tests for a
# truly interactive shell.  There is no need to set anything past this
# point for scp and rcp, and it's important to refrain from outputting
# anything in those cases.
if [[ $- != *i* ]] ; then
	# Shell is non-interactive.  Be done now!
	return
fi

# Now you should be able to safely put what you want here.  The
# following three lines at least are recommended.
alias rm='rm -i'
alias mv='mv -i'
alias cp='cp -i'
