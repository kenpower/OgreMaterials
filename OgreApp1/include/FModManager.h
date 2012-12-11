#pragma once
#include "C:\Program Files (x86)\FMOD SoundSystem\FMOD Programmers API Windows\api\inc\fmod.hpp"
#include <iostream>

class FModManager
{
public:
	static FMOD::System* System();

private:
	static FMOD::System *system;

};

