//
//  treasureChest.hpp
//  Blind Jump
//
//  Created by Evan Bowman on 11/14/15.
//  Copyright © 2015 Evan Bowman. All rights reserved.
//

#pragma once
#ifndef treasureChest_hpp
#define treasureChest_hpp

#include "detailParent.hpp"
#include "inputController.hpp"
#include "spriteSheet.hpp"

class TreasureChest : public Detail {
public:
	enum class State {
		closed, opening, ready, complete
	};
	TreasureChest(float, float, const sf::Texture &, char);
	const sf::Sprite & getShadow() const;
	const sf::Sprite & getSprite() const;
	void update(float, float, const sf::Time &);
	State getState() const;
	void setState(const State);
	char getItem() const;
	
private:
	State state;
	char item;
	int32_t animationTimer;
	uint8_t frameIndex;
	mutable SpriteSheet<656, 76, 16, 30> chestSheet;
	mutable sf::Sprite chestShadow;
};
#endif /* treasureChest_hpp */
