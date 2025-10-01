#include <Args$1.h>

#include <Args.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/channels/ByteChannel.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/ReadableByteChannel.h>
#include <java/nio/channels/SeekableByteChannel.h>
#include <jcpp.h>

using $Args = ::Args;
using $Args$Thunk = ::Args$Thunk;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteChannel = ::java::nio::channels::ByteChannel;
using $FileChannel = ::java::nio::channels::FileChannel;
using $ReadableByteChannel = ::java::nio::channels::ReadableByteChannel;
using $SeekableByteChannel = ::java::nio::channels::SeekableByteChannel;

$FieldInfo _Args$1_FieldInfo_[] = {
	{"val$fc", "Ljava/nio/channels/FileChannel;", nullptr, $FINAL | $SYNTHETIC, $field(Args$1, val$fc)},
	{}
};

$MethodInfo _Args$1_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/FileChannel;)V", "()V", 0, $method(static_cast<void(Args$1::*)($FileChannel*)>(&Args$1::init$))},
	{"run", "()V", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _Args$1_EnclosingMethodInfo_ = {
	"Args",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Args$1_InnerClassesInfo_[] = {
	{"Args$1", nullptr, nullptr, 0},
	{"Args$Thunk", "Args", "Thunk", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Args$1_ClassInfo_ = {
	$ACC_SUPER,
	"Args$1",
	"java.lang.Object",
	"Args$Thunk",
	_Args$1_FieldInfo_,
	_Args$1_MethodInfo_,
	nullptr,
	&_Args$1_EnclosingMethodInfo_,
	_Args$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Args"
};

$Object* allocate$Args$1($Class* clazz) {
	return $of($alloc(Args$1));
}

void Args$1::init$($FileChannel* val$fc) {
	$set(this, val$fc, val$fc);
}

void Args$1::run() {
	$nc(this->val$fc)->transferFrom(static_cast<$ReadableByteChannel*>(static_cast<$ByteChannel*>(static_cast<$SeekableByteChannel*>(this->val$fc))), -1, 1);
}

Args$1::Args$1() {
}

$Class* Args$1::load$($String* name, bool initialize) {
	$loadClass(Args$1, name, initialize, &_Args$1_ClassInfo_, allocate$Args$1);
	return class$;
}

$Class* Args$1::class$ = nullptr;