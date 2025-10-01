#include <Args$6.h>

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

$FieldInfo _Args$6_FieldInfo_[] = {
	{"val$fc", "Ljava/nio/channels/FileChannel;", nullptr, $FINAL | $SYNTHETIC, $field(Args$6, val$fc)},
	{}
};

$MethodInfo _Args$6_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/FileChannel;)V", "()V", 0, $method(static_cast<void(Args$6::*)($FileChannel*)>(&Args$6::init$))},
	{"run", "()V", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _Args$6_EnclosingMethodInfo_ = {
	"Args",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Args$6_InnerClassesInfo_[] = {
	{"Args$6", nullptr, nullptr, 0},
	{"Args$Thunk", "Args", "Thunk", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Args$6_ClassInfo_ = {
	$ACC_SUPER,
	"Args$6",
	"java.lang.Object",
	"Args$Thunk",
	_Args$6_FieldInfo_,
	_Args$6_MethodInfo_,
	nullptr,
	&_Args$6_EnclosingMethodInfo_,
	_Args$6_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Args"
};

$Object* allocate$Args$6($Class* clazz) {
	return $of($alloc(Args$6));
}

void Args$6::init$($FileChannel* val$fc) {
	$set(this, val$fc, val$fc);
}

void Args$6::run() {
	$init($FileChannel$MapMode);
	$nc(this->val$fc)->map($FileChannel$MapMode::READ_ONLY, 0, -1);
}

Args$6::Args$6() {
}

$Class* Args$6::load$($String* name, bool initialize) {
	$loadClass(Args$6, name, initialize, &_Args$6_ClassInfo_, allocate$Args$6);
	return class$;
}

$Class* Args$6::class$ = nullptr;