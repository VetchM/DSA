#pragma once
struct Queen {
	int x, y;
	bool operator ==(Queen const& q) const {
		return (x == q.x) || (x + y == q.x + q.y) || (x - y == q.x - q.y);
	}
	bool operator !=(Queen const& q) { return !(*this == q); }
};