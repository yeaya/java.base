#include <Args$2.h>

#include <Args.h>
#include <java/nio/channels/ByteChannel.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/ReadableByteChannel.h>
#include <java/nio/channels/SeekableByteChannel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteChannel = ::java::nio::channels::ByteChannel;
using $FileChannel = ::java::nio::channels::FileChannel;
using $ReadableByteChannel = ::java::nio::channels::ReadableByteChannel;
using $SeekableByteChannel = ::java::nio::channels::SeekableByteChannel;

$FieldInfo _Args$2_FieldInfo_[] = {
	{"val$fc", "Ljava/nio/channels/FileChannel;", nullptr, $FINAL | $SYNTHETIC, $field(Args$2, val$fc)},
	{}
};

$MethodInfo _Args$2_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/FileChannel;)V", "()V", 0, $method(Args$2, init$, void, $FileChannel*)},
	{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Args$2, run, void), "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _Args$2_EnclosingMethodInfo_ = {
	"Args",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Args$2_InnerClassesInfo_[] = {
	{"Args$2", nullptr, nullptr, 0},
	{"Args$Thunk", "Args", "Thunk", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Args$2_ClassInfo_ = {
	$ACC_SUPER,
	"Args$2",
	"java.lang.Object",
	"Args$Thunk",
	_Args$2_FieldInfo_,
	_Args$2_MethodInfo_,
	nullptr,
	&_Args$2_EnclosingMethodInfo_,
	_Args$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Args"
};

$Object* allocate$Args$2($Class* clazz) {
	return $of($alloc(Args$2));
}

void Args$2::init$($FileChannel* val$fc) {
	$set(this, val$fc, val$fc);
}

void Args$2::run() {
	$nc(this->val$fc)->transferFrom(static_cast<$ReadableByteChannel*>(static_cast<$ByteChannel*>(static_cast<$SeekableByteChannel*>(this->val$fc))), 0, -1);
}

Args$2::Args$2() {
}

$Class* Args$2::load$($String* name, bool initialize) {
	$loadClass(Args$2, name, initialize, &_Args$2_ClassInfo_, allocate$Args$2);
	return class$;
}

$Class* Args$2::class$ = nullptr;