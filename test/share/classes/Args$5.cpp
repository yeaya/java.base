#include <Args$5.h>
#include <Args.h>
#include <java/nio/MappedByteBuffer.h>
#include <java/nio/channels/FileChannel$MapMode.h>
#include <java/nio/channels/FileChannel.h>
#include <jcpp.h>

#undef READ_ONLY

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileChannel = ::java::nio::channels::FileChannel;
using $FileChannel$MapMode = ::java::nio::channels::FileChannel$MapMode;

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
	$FieldInfo fieldInfos$$[] = {
		{"val$fc", "Ljava/nio/channels/FileChannel;", nullptr, $FINAL | $SYNTHETIC, $field(Args$5, val$fc)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/channels/FileChannel;)V", "()V", 0, $method(Args$5, init$, void, $FileChannel*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Args$5, run, void), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Args",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Args$5", nullptr, nullptr, 0},
		{"Args$Thunk", "Args", "Thunk", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Args$5",
		"java.lang.Object",
		"Args$Thunk",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Args"
	};
	$loadClass(Args$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Args$5);
	});
	return class$;
}

$Class* Args$5::class$ = nullptr;