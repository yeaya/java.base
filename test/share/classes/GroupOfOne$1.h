#ifndef _GroupOfOne$1_h_
#define _GroupOfOne$1_h_
//$ class GroupOfOne$1
//$ extends java.nio.channels.CompletionHandler

#include <java/nio/channels/CompletionHandler.h>

namespace java {
	namespace lang {
		class Throwable;
		class Void;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class AsynchronousServerSocketChannel;
			class AsynchronousSocketChannel;
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

class GroupOfOne$1 : public ::java::nio::channels::CompletionHandler {
	$class(GroupOfOne$1, $NO_CLASS_INIT, ::java::nio::channels::CompletionHandler)
public:
	GroupOfOne$1();
	void init$(::java::util::List* val$accepted, ::java::nio::channels::AsynchronousServerSocketChannel* val$listener);
	virtual void completed(::java::nio::channels::AsynchronousSocketChannel* ch, ::java::lang::Void* att);
	virtual void completed(Object$* ch, Object$* att) override;
	virtual void failed($Throwable* exc, ::java::lang::Void* att);
	virtual void failed($Throwable* exc, Object$* att) override;
	::java::nio::channels::AsynchronousServerSocketChannel* val$listener = nullptr;
	::java::util::List* val$accepted = nullptr;
};

#endif // _GroupOfOne$1_h_