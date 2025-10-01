#ifndef _MultiThreadStackWalk$Test_h_
#define _MultiThreadStackWalk$Test_h_
//$ class MultiThreadStackWalk$Test
//$ extends MultiThreadStackWalk$Call

#include <MultiThreadStackWalk$Call.h>

class MultiThreadStackWalk$Call$WalkType;
class MultiThreadStackWalk$Env;
class MultiThreadStackWalk$Marker;
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicBoolean;
			}
		}
	}
}

class $export MultiThreadStackWalk$Test : public ::MultiThreadStackWalk$Call {
	$class(MultiThreadStackWalk$Test, $NO_CLASS_INIT, ::MultiThreadStackWalk$Call)
public:
	MultiThreadStackWalk$Test();
	void init$(::MultiThreadStackWalk$Call$WalkType* walkType);
	virtual void call(::MultiThreadStackWalk$Env* env, ::MultiThreadStackWalk$Call* next, int32_t total, int32_t current, int32_t markAt) override;
	virtual ::MultiThreadStackWalk$Call$WalkType* getWalkType() override;
	::MultiThreadStackWalk$Marker* marker = nullptr;
	::MultiThreadStackWalk$Call$WalkType* walkType = nullptr;
	::java::util::concurrent::atomic::AtomicBoolean* debug = nullptr;
};

#endif // _MultiThreadStackWalk$Test_h_