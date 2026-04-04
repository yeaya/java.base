#include <OpsAfterClose4RandomAccessFile$10.h>
#include <OpsAfterClose4RandomAccessFile.h>
#include <java/io/IOException.h>
#include <java/io/RandomAccessFile.h>
#include <jcpp.h>

using $OpsAfterClose4RandomAccessFile = ::OpsAfterClose4RandomAccessFile;
using $IOException = ::java::io::IOException;
using $RandomAccessFile = ::java::io::RandomAccessFile;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void OpsAfterClose4RandomAccessFile$10::init$($String* $enum$name, int32_t $enum$ordinal) {
	$OpsAfterClose4RandomAccessFile::init$($enum$name, $enum$ordinal);
}

bool OpsAfterClose4RandomAccessFile$10::check($RandomAccessFile* r) {
	$useLocalObjectStack();
	try {
		$nc(r)->write(1);
	} catch ($IOException& io) {
		$nc($System::out)->print($$str({"Excep Msg: "_s, $(io->getMessage()), ", "_s}));
		return true;
	}
	return false;
}

OpsAfterClose4RandomAccessFile$10::OpsAfterClose4RandomAccessFile$10() {
}

$Class* OpsAfterClose4RandomAccessFile$10::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;I)V", nullptr, $PRIVATE, $method(OpsAfterClose4RandomAccessFile$10, init$, void, $String*, int32_t)},
		{"check", "(Ljava/io/RandomAccessFile;)Z", nullptr, 0, $virtualMethod(OpsAfterClose4RandomAccessFile$10, check, bool, $RandomAccessFile*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"OpsAfterClose4RandomAccessFile",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"OpsAfterClose4RandomAccessFile$10", nullptr, nullptr, $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"OpsAfterClose4RandomAccessFile$10",
		"OpsAfterClose4RandomAccessFile",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"OpsAfterClose4RandomAccessFile"
	};
	$loadClass(OpsAfterClose4RandomAccessFile$10, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(OpsAfterClose4RandomAccessFile$10));
	});
	return class$;
}

$Class* OpsAfterClose4RandomAccessFile$10::class$ = nullptr;