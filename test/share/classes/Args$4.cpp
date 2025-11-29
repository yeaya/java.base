#include <Args$4.h>

#include <Args.h>
#include <java/nio/channels/ByteChannel.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/SeekableByteChannel.h>
#include <java/nio/channels/WritableByteChannel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteChannel = ::java::nio::channels::ByteChannel;
using $FileChannel = ::java::nio::channels::FileChannel;
using $SeekableByteChannel = ::java::nio::channels::SeekableByteChannel;
using $WritableByteChannel = ::java::nio::channels::WritableByteChannel;

$FieldInfo _Args$4_FieldInfo_[] = {
	{"val$fc", "Ljava/nio/channels/FileChannel;", nullptr, $FINAL | $SYNTHETIC, $field(Args$4, val$fc)},
	{}
};

$MethodInfo _Args$4_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/FileChannel;)V", "()V", 0, $method(static_cast<void(Args$4::*)($FileChannel*)>(&Args$4::init$))},
	{"run", "()V", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _Args$4_EnclosingMethodInfo_ = {
	"Args",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Args$4_InnerClassesInfo_[] = {
	{"Args$4", nullptr, nullptr, 0},
	{"Args$Thunk", "Args", "Thunk", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Args$4_ClassInfo_ = {
	$ACC_SUPER,
	"Args$4",
	"java.lang.Object",
	"Args$Thunk",
	_Args$4_FieldInfo_,
	_Args$4_MethodInfo_,
	nullptr,
	&_Args$4_EnclosingMethodInfo_,
	_Args$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Args"
};

$Object* allocate$Args$4($Class* clazz) {
	return $of($alloc(Args$4));
}

void Args$4::init$($FileChannel* val$fc) {
	$set(this, val$fc, val$fc);
}

void Args$4::run() {
	$nc(this->val$fc)->transferTo(0, -1, static_cast<$WritableByteChannel*>(static_cast<$ByteChannel*>(static_cast<$SeekableByteChannel*>(this->val$fc))));
}

Args$4::Args$4() {
}

$Class* Args$4::load$($String* name, bool initialize) {
	$loadClass(Args$4, name, initialize, &_Args$4_ClassInfo_, allocate$Args$4);
	return class$;
}

$Class* Args$4::class$ = nullptr;