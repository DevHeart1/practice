#!/usr/bin/python3

'''The cmd Module. 
This is an interface that will enable interaction with the software'''

import cmd

class HBNBCommand(cmd.Cmd):
    '''This is the main class for the module.'''

    prompt = "(hbnb) "

    def emptyline(self):
        '''Nothing will be executed if an empty line is passed.'''
        pass

    def do_quit(self, line):
        '''Quit command to exit the program'''
        return True

    def do_EOF(self, line):
        '''This will quit the program'''
        return True


if __name__ == "__main__":
    HBNBCommand().cmdloop()

