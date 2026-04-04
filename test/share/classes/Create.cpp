#include <Create.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void Create::init$() {
}

void Create::main($StringArray* args) {
	$useLocalObjectStack();
	$var($String, fileName, createFileName(Create::length));
	$var($File, file, $new($File, fileName));
	try {
		bool result = file->createNewFile();
		if (result) {
			if (!file->exists()) {
				$throwNew($RuntimeException, "Result is incorrect"_s);
			}
		} else if (file->exists()) {
			$throwNew($RuntimeException, "Result is incorrect"_s);
		}
	} catch ($IOException& ioe) {
	}
}

$String* Create::createFileName(int32_t length) {
	$var($chars, array, $new($chars, length));
	for (int32_t i = 0; i < length; ++i) {
		array->set(i, (char16_t)(u'0' + (i % 10)));
	}
	return $new($String, array);
}

Create::Create() {
}

$Class* Create::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"length", "I", nullptr, $STATIC | $FINAL, $constField(Create, length)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Create, init$, void)},
		{"createFileName", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Create, createFileName, $String*, int32_t)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Create, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Create",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Create, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Create);
	});
	return class$;
}

$Class* Create::class$ = nullptr;