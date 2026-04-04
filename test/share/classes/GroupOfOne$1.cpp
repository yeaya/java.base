#include <GroupOfOne$1.h>
#include <GroupOfOne.h>
#include <java/nio/channels/AsynchronousServerSocketChannel.h>
#include <java/nio/channels/AsynchronousSocketChannel.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $AsynchronousServerSocketChannel = ::java::nio::channels::AsynchronousServerSocketChannel;
using $AsynchronousSocketChannel = ::java::nio::channels::AsynchronousSocketChannel;
using $List = ::java::util::List;

void GroupOfOne$1::init$($List* val$accepted, $AsynchronousServerSocketChannel* val$listener) {
	$set(this, val$accepted, val$accepted);
	$set(this, val$listener, val$listener);
}

void GroupOfOne$1::completed($AsynchronousSocketChannel* ch, $Void* att) {
	$synchronized(this->val$accepted) {
		this->val$accepted->add(ch);
	}
	$nc(this->val$listener)->accept(($Void*)nullptr, this);
}

void GroupOfOne$1::failed($Throwable* exc, $Void* att) {
}

void GroupOfOne$1::failed($Throwable* exc, Object$* att) {
	this->failed(exc, $cast($Void, att));
}

void GroupOfOne$1::completed(Object$* ch, Object$* att) {
	this->completed($cast($AsynchronousSocketChannel, ch), $cast($Void, att));
}

GroupOfOne$1::GroupOfOne$1() {
}

$Class* GroupOfOne$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$listener", "Ljava/nio/channels/AsynchronousServerSocketChannel;", nullptr, $FINAL | $SYNTHETIC, $field(GroupOfOne$1, val$listener)},
		{"val$accepted", "Ljava/util/List;", nullptr, $FINAL | $SYNTHETIC, $field(GroupOfOne$1, val$accepted)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/List;Ljava/nio/channels/AsynchronousServerSocketChannel;)V", "()V", 0, $method(GroupOfOne$1, init$, void, $List*, $AsynchronousServerSocketChannel*)},
		{"completed", "(Ljava/nio/channels/AsynchronousSocketChannel;Ljava/lang/Void;)V", nullptr, $PUBLIC, $virtualMethod(GroupOfOne$1, completed, void, $AsynchronousSocketChannel*, $Void*)},
		{"completed", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(GroupOfOne$1, completed, void, Object$*, Object$*)},
		{"failed", "(Ljava/lang/Throwable;Ljava/lang/Void;)V", nullptr, $PUBLIC, $virtualMethod(GroupOfOne$1, failed, void, $Throwable*, $Void*)},
		{"failed", "(Ljava/lang/Throwable;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(GroupOfOne$1, failed, void, $Throwable*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"GroupOfOne",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GroupOfOne$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"GroupOfOne$1",
		"java.lang.Object",
		"java.nio.channels.CompletionHandler",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/nio/channels/CompletionHandler<Ljava/nio/channels/AsynchronousSocketChannel;Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"GroupOfOne"
	};
	$loadClass(GroupOfOne$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GroupOfOne$1);
	});
	return class$;
}

$Class* GroupOfOne$1::class$ = nullptr;