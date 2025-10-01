#ifndef _MultiThreadStackWalk$Call_h_
#define _MultiThreadStackWalk$Call_h_
//$ interface MultiThreadStackWalk$Call
//$ extends java.lang.Object

#include <java/lang/Object.h>

class MultiThreadStackWalk$Call$WalkType;
class MultiThreadStackWalk$Env;

class $export MultiThreadStackWalk$Call : public ::java::lang::Object {
	$interface(MultiThreadStackWalk$Call, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void call(::MultiThreadStackWalk$Env* env, ::MultiThreadStackWalk$Call* next, int32_t total, int32_t current, int32_t markAt);
	virtual ::MultiThreadStackWalk$Call$WalkType* getWalkType();
	virtual void walk(::MultiThreadStackWalk$Env* env);
};

#endif // _MultiThreadStackWalk$Call_h_