#include <Args$4.h>
#include <Args.h>
#include <java/nio/channels/FileChannel.h>
#include <java/nio/channels/SeekableByteChannel.h>
#include <java/nio/channels/WritableByteChannel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FileChannel = ::java::nio::channels::FileChannel;
using $SeekableByteChannel = ::java::nio::channels::SeekableByteChannel;

void Args$4::init$($FileChannel* val$fc) {
	$set(this, val$fc, val$fc);
}

void Args$4::run() {
	$nc(this->val$fc)->transferTo(0, -1, $cast($SeekableByteChannel, this->val$fc));
}

Args$4::Args$4() {
}

$Class* Args$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$fc", "Ljava/nio/channels/FileChannel;", nullptr, $FINAL | $SYNTHETIC, $field(Args$4, val$fc)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/channels/FileChannel;)V", "()V", 0, $method(Args$4, init$, void, $FileChannel*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Args$4, run, void), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Args",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Args$4", nullptr, nullptr, 0},
		{"Args$Thunk", "Args", "Thunk", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Args$4",
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
	$loadClass(Args$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Args$4);
	});
	return class$;
}

$Class* Args$4::class$ = nullptr;