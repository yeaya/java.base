#ifndef _GroupOfOne$3$1_h_
#define _GroupOfOne$3$1_h_
//$ class GroupOfOne$3$1
//$ extends java.nio.channels.CompletionHandler

#include <java/nio/channels/CompletionHandler.h>

class GroupOfOne$3;
namespace java {
	namespace lang {
		class Integer;
		class Throwable;
		class Void;
	}
}

class GroupOfOne$3$1 : public ::java::nio::channels::CompletionHandler {
	$class(GroupOfOne$3$1, $NO_CLASS_INIT, ::java::nio::channels::CompletionHandler)
public:
	GroupOfOne$3$1();
	void init$(::GroupOfOne$3* this$0);
	virtual void completed(::java::lang::Integer* bytesRead, ::java::lang::Void* att);
	virtual void completed(Object$* bytesRead, Object$* att) override;
	virtual void failed($Throwable* exc, ::java::lang::Void* att);
	virtual void failed($Throwable* exc, Object$* att) override;
	::GroupOfOne$3* this$0 = nullptr;
};

#endif // _GroupOfOne$3$1_h_