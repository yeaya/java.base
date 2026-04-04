#include <java/lang/ProcessBuilder$NullInputStream.h>
#include <java/io/InputStream.h>
#include <java/lang/ProcessBuilder.h>
#include <jcpp.h>

#undef INSTANCE

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {

ProcessBuilder$NullInputStream* ProcessBuilder$NullInputStream::INSTANCE = nullptr;

void ProcessBuilder$NullInputStream::init$() {
	$InputStream::init$();
}

int32_t ProcessBuilder$NullInputStream::read() {
	return -1;
}

int32_t ProcessBuilder$NullInputStream::available() {
	return 0;
}

void ProcessBuilder$NullInputStream::clinit$($Class* clazz) {
	$assignStatic(ProcessBuilder$NullInputStream::INSTANCE, $new(ProcessBuilder$NullInputStream));
}

ProcessBuilder$NullInputStream::ProcessBuilder$NullInputStream() {
}

$Class* ProcessBuilder$NullInputStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INSTANCE", "Ljava/lang/ProcessBuilder$NullInputStream;", nullptr, $STATIC | $FINAL, $staticField(ProcessBuilder$NullInputStream, INSTANCE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ProcessBuilder$NullInputStream, init$, void)},
		{"available", "()I", nullptr, $PUBLIC, $virtualMethod(ProcessBuilder$NullInputStream, available, int32_t)},
		{"read", "()I", nullptr, $PUBLIC, $virtualMethod(ProcessBuilder$NullInputStream, read, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ProcessBuilder$NullInputStream", "java.lang.ProcessBuilder", "NullInputStream", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.ProcessBuilder$NullInputStream",
		"java.io.InputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.ProcessBuilder"
	};
	$loadClass(ProcessBuilder$NullInputStream, name, initialize, &classInfo$$, ProcessBuilder$NullInputStream::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ProcessBuilder$NullInputStream);
	});
	return class$;
}

$Class* ProcessBuilder$NullInputStream::class$ = nullptr;

	} // lang
} // java