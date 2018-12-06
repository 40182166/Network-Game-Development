#include <cassert>

#include "objects.h"

void Tank::add_message(const TankMessage& msg) {
	messages_.push_back(msg);
}

void Tank::predict_position(float time) {
	const int msize = messages_.size();
	assert(msize >= 3);
	const TankMessage& msg0 = messages_[msize - 1];
	const TankMessage& msg1 = messages_[msize - 2];
	const TankMessage& msg2 = messages_[msize - 3];

	// FIXME: Implement prediction here!
	// You have:
	// - the history of position messages received, in "messages_"
	//   (msg0 is the most recent, msg1 the 2nd most recent, msg2 the 3rd most recent)
	// - the current time, in "time"
	// You need to update:
	// - the predicted position at the current time, in "x_" and "y_"
}
