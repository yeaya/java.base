#include <Args$3.h>

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
#include <java/nio/channels/SeekableByteChannel.h>
#include <java/nio/channels/WritableByteChannel.h>
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
using $SeekableByteChannel = ::java::nio::channels::SeekableByteChannel;
using $WritableByteChannel = ::java::nio::channels::WritableByteChannel;

$FieldInfo _Args$3_FieldInfo_[] = {
	{"val$fc", "Ljava/nio/channels/FileChannel;", nullptr, $FINAL | $SYNTHETIC, $field(Args$3, val$fc)},
	{}
};

$MethodInfo _Args$3_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/FileChannel;)V", "()V", 0, $method(static_cast<void(Args$3::*)($FileChannel*)>(&Args$3::init$))},
	{"run", "()V", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _Args$3_EnclosingMethodInfo_ = {
	"Args",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Args$3_InnerClassesInfo_[] = {
	{"Args$3", nullptr, nullptr, 0},
	{"Args$Thunk", "Args", "Thunk", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Args$3_ClassInfo_ = {
	$ACC_SUPER,
	"Args$3",
	"java.lang.Object",
	"Args$Thunk",
	_Args$3_FieldInfo_,
	_Args$3_MethodInfo_,
	nullptr,
	&_Args$3_EnclosingMethodInfo_,
	_Args$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Args"
};

$Object* allocate$Args$3($Class* clazz) {
	return $of($alloc(Args$3));
}

void Args$3::init$($FileChannel* val$fc) {
	$set(this, val$fc, val$fc);
}

void Args$3::run() {
	$nc(this->val$fc)->transferTo(-1, 1, static_cast<$WritableByteChannel*>(static_cast<$ByteChannel*>(static_cast<$SeekableByteChannel*>(this->val$fc))));
}

Args$3::Args$3() {
}

$Class* Args$3::load$($String* name, bool initialize) {
	$loadClass(Args$3, name, initialize, &_Args$3_ClassInfo_, allocate$Args$3);
	return class$;
}

$Class* Args$3::class$ = nullptr;