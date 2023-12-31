#pragma once

#include "Entity.h"

namespace cheat::game
{
	class IEntityFilter
	{
	public:
		virtual bool IsValid(Entity* entity) const = 0;
	};
}

