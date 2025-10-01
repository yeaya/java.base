#ifndef _MultiThreadStackWalk$Marker_h_
#define _MultiThreadStackWalk$Marker_h_
//$ class MultiThreadStackWalk$Marker
//$ extends MultiThreadStackWalk$Call

#include <MultiThreadStackWalk$Call.h>

class MultiThreadStackWalk$Call$WalkType;
class MultiThreadStackWalk$Env;

class $export MultiThreadStackWalk$Marker : public ::MultiThreadStackWalk$Call {
	$class(MultiThreadStackWalk$Marker, $NO_CLASS_INIT, ::MultiThreadStackWalk$Call)
public:
	MultiThreadStackWalk$Marker();
	void init$(::MultiThreadStackWalk$Call$WalkType* walkType);
	virtual void call(::MultiThreadStackWalk$Env* env, ::MultiThreadStackWalk$Call* next, int32_t total, int32_t current, int32_t markAt) override;
	virtual ::MultiThreadStackWalk$Call$WalkType* getWalkType() override;
	::MultiThreadStackWalk$Call$WalkType* walkType = nullptr;
};

#endif // _MultiThreadStackWalk$Marker_h_