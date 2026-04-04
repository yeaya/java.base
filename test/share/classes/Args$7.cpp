#include <Args$7.h>
#include <Args.h>
#include <java/nio/MappedByteBuffer.h>
#include <java/nio/channels/FileChannel$MapMode.h>
#include <java/nio/channels/FileChannel.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef READ_ONLY

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileChannel = ::java::nio::channels::FileChannel;
using $FileChannel$MapMode = ::java::nio::channels::FileChannel$MapMode;

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
	$FieldInfo fieldInfos$$[] = {
		{"val$fc", "Ljava/nio/channels/FileChannel;", nullptr, $FINAL | $SYNTHETIC, $field(Args$7, val$fc)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/channels/FileChannel;)V", "()V", 0, $method(Args$7, init$, void, $FileChannel*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Args$7, run, void), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Args",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Args$7", nullptr, nullptr, 0},
		{"Args$Thunk", "Args", "Thunk", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Args$7",
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
	$loadClass(Args$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Args$7);
	});
	return class$;
}

$Class* Args$7::class$ = nullptr;