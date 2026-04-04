#include <Args$1.h>
#include <Args.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/ReadableByteChannel.h>
#include <java/nio/channels/SeekableByteChannel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileChannel = ::java::nio::channels::FileChannel;
using $SeekableByteChannel = ::java::nio::channels::SeekableByteChannel;

void Args$1::init$($FileChannel* val$fc) {
	$set(this, val$fc, val$fc);
}

void Args$1::run() {
	$nc(this->val$fc)->transferFrom($cast($SeekableByteChannel, this->val$fc), -1, 1);
}

Args$1::Args$1() {
}

$Class* Args$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$fc", "Ljava/nio/channels/FileChannel;", nullptr, $FINAL | $SYNTHETIC, $field(Args$1, val$fc)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/channels/FileChannel;)V", "()V", 0, $method(Args$1, init$, void, $FileChannel*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Args$1, run, void), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Args",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Args$1", nullptr, nullptr, 0},
		{"Args$Thunk", "Args", "Thunk", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Args$1",
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
	$loadClass(Args$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Args$1);
	});
	return class$;
}

$Class* Args$1::class$ = nullptr;