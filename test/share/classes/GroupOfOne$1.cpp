#include <GroupOfOne$1.h>

#include <GroupOfOne.h>
#include <java/nio/channels/AsynchronousServerSocketChannel.h>
#include <java/nio/channels/AsynchronousSocketChannel.h>
#include <java/nio/channels/CompletionHandler.h>
#include <java/util/List.h>
#include <jcpp.h>

using $GroupOfOne = ::GroupOfOne;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Void = ::java::lang::Void;
using $AsynchronousServerSocketChannel = ::java::nio::channels::AsynchronousServerSocketChannel;
using $AsynchronousSocketChannel = ::java::nio::channels::AsynchronousSocketChannel;
using $CompletionHandler = ::java::nio::channels::CompletionHandler;
using $List = ::java::util::List;

$FieldInfo _GroupOfOne$1_FieldInfo_[] = {
	{"val$listener", "Ljava/nio/channels/AsynchronousServerSocketChannel;", nullptr, $FINAL | $SYNTHETIC, $field(GroupOfOne$1, val$listener)},
	{"val$accepted", "Ljava/util/List;", nullptr, $FINAL | $SYNTHETIC, $field(GroupOfOne$1, val$accepted)},
	{}
};

$MethodInfo _GroupOfOne$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/List;Ljava/nio/channels/AsynchronousServerSocketChannel;)V", "()V", 0, $method(static_cast<void(GroupOfOne$1::*)($List*,$AsynchronousServerSocketChannel*)>(&GroupOfOne$1::init$))},
	{"completed", "(Ljava/nio/channels/AsynchronousSocketChannel;Ljava/lang/Void;)V", nullptr, $PUBLIC},
	{"completed", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"failed", "(Ljava/lang/Throwable;Ljava/lang/Void;)V", nullptr, $PUBLIC},
	{"failed", "(Ljava/lang/Throwable;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$EnclosingMethodInfo _GroupOfOne$1_EnclosingMethodInfo_ = {
	"GroupOfOne",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _GroupOfOne$1_InnerClassesInfo_[] = {
	{"GroupOfOne$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _GroupOfOne$1_ClassInfo_ = {
	$ACC_SUPER,
	"GroupOfOne$1",
	"java.lang.Object",
	"java.nio.channels.CompletionHandler",
	_GroupOfOne$1_FieldInfo_,
	_GroupOfOne$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/nio/channels/CompletionHandler<Ljava/nio/channels/AsynchronousSocketChannel;Ljava/lang/Void;>;",
	&_GroupOfOne$1_EnclosingMethodInfo_,
	_GroupOfOne$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"GroupOfOne"
};

$Object* allocate$GroupOfOne$1($Class* clazz) {
	return $of($alloc(GroupOfOne$1));
}

void GroupOfOne$1::init$($List* val$accepted, $AsynchronousServerSocketChannel* val$listener) {
	$set(this, val$accepted, val$accepted);
	$set(this, val$listener, val$listener);
}

void GroupOfOne$1::completed($AsynchronousSocketChannel* ch, $Void* att) {
	$synchronized(this->val$accepted) {
		$nc(this->val$accepted)->add(ch);
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
	$loadClass(GroupOfOne$1, name, initialize, &_GroupOfOne$1_ClassInfo_, allocate$GroupOfOne$1);
	return class$;
}

$Class* GroupOfOne$1::class$ = nullptr;