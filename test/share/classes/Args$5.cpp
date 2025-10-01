#include <Args$5.h>

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
#include <java/nio/MappedByteBuffer.h>
#include <java/nio/channels/FileChannel$MapMode.h>
#include <java/nio/channels/FileChannel.h>
#include <jcpp.h>

#undef READ_ONLY

using $Args = ::Args;
using $Args$Thunk = ::Args$Thunk;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MappedByteBuffer = ::java::nio::MappedByteBuffer;
using $FileChannel = ::java::nio::channels::FileChannel;
using $FileChannel$MapMode = ::java::nio::channels::FileChannel$MapMode;

$FieldInfo _Args$5_FieldInfo_[] = {
	{"val$fc", "Ljava/nio/channels/FileChannel;", nullptr, $FINAL | $SYNTHETIC, $field(Args$5, val$fc)},
	{}
};

$MethodInfo _Args$5_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/FileChannel;)V", "()V", 0, $method(static_cast<void(Args$5::*)($FileChannel*)>(&Args$5::init$))},
	{"run", "()V", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _Args$5_EnclosingMethodInfo_ = {
	"Args",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Args$5_InnerClassesInfo_[] = {
	{"Args$5", nullptr, nullptr, 0},
	{"Args$Thunk", "Args", "Thunk", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Args$5_ClassInfo_ = {
	$ACC_SUPER,
	"Args$5",
	"java.lang.Object",
	"Args$Thunk",
	_Args$5_FieldInfo_,
	_Args$5_MethodInfo_,
	nullptr,
	&_Args$5_EnclosingMethodInfo_,
	_Args$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Args"
};

$Object* allocate$Args$5($Class* clazz) {
	return $of($alloc(Args$5));
}

void Args$5::init$($FileChannel* val$fc) {
	$set(this, val$fc, val$fc);
}

void Args$5::run() {
	$init($FileChannel$MapMode);
	$nc(this->val$fc)->map($FileChannel$MapMode::READ_ONLY, -1, 0);
}

Args$5::Args$5() {
}

$Class* Args$5::load$($String* name, bool initialize) {
	$loadClass(Args$5, name, initialize, &_Args$5_ClassInfo_, allocate$Args$5);
	return class$;
}

$Class* Args$5::class$ = nullptr;