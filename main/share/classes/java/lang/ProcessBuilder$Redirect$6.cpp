#include <java/lang/ProcessBuilder$Redirect$6.h>
#include <java/io/File.h>
#include <java/lang/ProcessBuilder$Redirect$Type.h>
#include <java/lang/ProcessBuilder$Redirect.h>
#include <jcpp.h>

#undef APPEND

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessBuilder$Redirect = ::java::lang::ProcessBuilder$Redirect;
using $ProcessBuilder$Redirect$Type = ::java::lang::ProcessBuilder$Redirect$Type;

namespace java {
	namespace lang {

void ProcessBuilder$Redirect$6::init$($File* val$file) {
	$set(this, val$file, val$file);
	$ProcessBuilder$Redirect::init$();
}

$ProcessBuilder$Redirect$Type* ProcessBuilder$Redirect$6::type() {
	$init($ProcessBuilder$Redirect$Type);
	return $ProcessBuilder$Redirect$Type::APPEND;
}

$File* ProcessBuilder$Redirect$6::file() {
	return this->val$file;
}

$String* ProcessBuilder$Redirect$6::toString() {
	return $str({"redirect to append to file \""_s, this->val$file, "\""_s});
}

bool ProcessBuilder$Redirect$6::append() {
	return true;
}

ProcessBuilder$Redirect$6::ProcessBuilder$Redirect$6() {
}

$Class* ProcessBuilder$Redirect$6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$file", "Ljava/io/File;", nullptr, $FINAL | $SYNTHETIC, $field(ProcessBuilder$Redirect$6, val$file)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/File;)V", nullptr, 0, $method(ProcessBuilder$Redirect$6, init$, void, $File*)},
		{"append", "()Z", nullptr, 0, $virtualMethod(ProcessBuilder$Redirect$6, append, bool)},
		{"file", "()Ljava/io/File;", nullptr, $PUBLIC, $virtualMethod(ProcessBuilder$Redirect$6, file, $File*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ProcessBuilder$Redirect$6, toString, $String*)},
		{"type", "()Ljava/lang/ProcessBuilder$Redirect$Type;", nullptr, $PUBLIC, $virtualMethod(ProcessBuilder$Redirect$6, type, $ProcessBuilder$Redirect$Type*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.ProcessBuilder$Redirect",
		"appendTo",
		"(Ljava/io/File;)Ljava/lang/ProcessBuilder$Redirect;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.ProcessBuilder$Redirect", "java.lang.ProcessBuilder", "Redirect", $PUBLIC | $STATIC | $ABSTRACT},
		{"java.lang.ProcessBuilder$Redirect$6", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.ProcessBuilder$Redirect$6",
		"java.lang.ProcessBuilder$Redirect",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.ProcessBuilder"
	};
	$loadClass(ProcessBuilder$Redirect$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProcessBuilder$Redirect$6);
	});
	return class$;
}

$Class* ProcessBuilder$Redirect$6::class$ = nullptr;

	} // lang
} // java