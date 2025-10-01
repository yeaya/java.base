#include <Args$7.h>

#include <Args.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/MappedByteBuffer.h>
#include <java/nio/channels/FileChannel$MapMode.h>
#include <java/nio/channels/FileChannel.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef READ_ONLY

using $Args = ::Args;
using $Args$Thunk = ::Args$Thunk;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $MappedByteBuffer = ::java::nio::MappedByteBuffer;
using $FileChannel = ::java::nio::channels::FileChannel;
using $FileChannel$MapMode = ::java::nio::channels::FileChannel$MapMode;

$FieldInfo _Args$7_FieldInfo_[] = {
	{"val$fc", "Ljava/nio/channels/FileChannel;", nullptr, $FINAL | $SYNTHETIC, $field(Args$7, val$fc)},
	{}
};

$MethodInfo _Args$7_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/channels/FileChannel;)V", "()V", 0, $method(static_cast<void(Args$7::*)($FileChannel*)>(&Args$7::init$))},
	{"run", "()V", nullptr, $PUBLIC, nullptr, "java.lang.Exception"},
	{}
};

$EnclosingMethodInfo _Args$7_EnclosingMethodInfo_ = {
	"Args",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _Args$7_InnerClassesInfo_[] = {
	{"Args$7", nullptr, nullptr, 0},
	{"Args$Thunk", "Args", "Thunk", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Args$7_ClassInfo_ = {
	$ACC_SUPER,
	"Args$7",
	"java.lang.Object",
	"Args$Thunk",
	_Args$7_FieldInfo_,
	_Args$7_MethodInfo_,
	nullptr,
	&_Args$7_EnclosingMethodInfo_,
	_Args$7_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"Args"
};

$Object* allocate$Args$7($Class* clazz) {
	return $of($alloc(Args$7));
}

void Args$7::init$($FileChannel* val$fc) {
	$set(this, val$fc, val$fc);
}

void Args$7::run() {
	$init($FileChannel$MapMode);
	$nc(this->val$fc)->map($FileChannel$MapMode::READ_ONLY, 0, (int64_t)$Integer::MAX_VALUE << 3);
}

Args$7::Args$7() {
}

$Class* Args$7::load$($String* name, bool initialize) {
	$loadClass(Args$7, name, initialize, &_Args$7_ClassInfo_, allocate$Args$7);
	return class$;
}

$Class* Args$7::class$ = nullptr;