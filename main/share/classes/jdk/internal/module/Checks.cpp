#include <jdk/internal/module/Checks.h>
#include <java/util/Set.h>
#include <jcpp.h>

#undef RESERVED

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Set = ::java::util::Set;

namespace jdk {
	namespace internal {
		namespace module {

$Set* Checks::RESERVED = nullptr;

void Checks::init$() {
}

$String* Checks::requireModuleName($String* name) {
	$init(Checks);
	$useLocalObjectStack();
	if (name == nullptr) {
		$throwNew($IllegalArgumentException, "Null module name"_s);
	}
	int32_t next = 0;
	int32_t off = 0;
	while ((next = $nc(name)->indexOf(u'.', off)) != -1) {
		$var($String, id, name->substring(off, next));
		if (!isJavaIdentifier(id)) {
			$throwNew($IllegalArgumentException, $$str({name, ": Invalid module name: \'"_s, id, "\' is not a Java identifier"_s}));
		}
		off = next + 1;
	}
	$var($String, last, name->substring(off));
	if (!isJavaIdentifier(last)) {
		$throwNew($IllegalArgumentException, $$str({name, ": Invalid module name: \'"_s, last, "\' is not a Java identifier"_s}));
	}
	return name;
}

$String* Checks::requirePackageName($String* name) {
	$init(Checks);
	return requireTypeName("package name"_s, name);
}

bool Checks::isPackageName($String* name) {
	$init(Checks);
	return isTypeName(name);
}

$String* Checks::requireServiceTypeName($String* name) {
	$init(Checks);
	return requireQualifiedClassName("service type name"_s, name);
}

$String* Checks::requireServiceProviderName($String* name) {
	$init(Checks);
	return requireQualifiedClassName("service provider name"_s, name);
}

$String* Checks::requireQualifiedClassName($String* what, $String* name) {
	$init(Checks);
	requireTypeName(what, name);
	if ($nc(name)->indexOf(u'.') == -1) {
		$throwNew($IllegalArgumentException, $$str({name, ": is not a qualified name of a Java class in a named package"_s}));
	}
	return name;
}

bool Checks::isClassName($String* name) {
	$init(Checks);
	return isTypeName(name);
}

bool Checks::isTypeName($String* name) {
	$init(Checks);
	$useLocalObjectStack();
	int32_t next = 0;
	int32_t off = 0;
	while ((next = $nc(name)->indexOf(u'.', off)) != -1) {
		$var($String, id, name->substring(off, next));
		if (!isJavaIdentifier(id)) {
			return false;
		}
		off = next + 1;
	}
	$var($String, last, name->substring(off));
	return isJavaIdentifier(last);
}

$String* Checks::requireTypeName($String* what, $String* name) {
	$init(Checks);
	$useLocalObjectStack();
	if (name == nullptr) {
		$throwNew($IllegalArgumentException, $$str({"Null "_s, what}));
	}
	int32_t next = 0;
	int32_t off = 0;
	while ((next = $nc(name)->indexOf(u'.', off)) != -1) {
		$var($String, id, name->substring(off, next));
		if (!isJavaIdentifier(id)) {
			$throwNew($IllegalArgumentException, $$str({name, ": Invalid "_s, what, ": \'"_s, id, "\' is not a Java identifier"_s}));
		}
		off = next + 1;
	}
	$var($String, last, name->substring(off));
	if (!isJavaIdentifier(last)) {
		$throwNew($IllegalArgumentException, $$str({name, ": Invalid "_s, what, ": \'"_s, last, "\' is not a Java identifier"_s}));
	}
	return name;
}

bool Checks::isJavaIdentifier($String* str) {
	$init(Checks);
	bool var$0 = $nc(str)->isEmpty();
	if (var$0 || $nc(Checks::RESERVED)->contains(str)) {
		return false;
	}
	int32_t first = $Character::codePointAt(str, 0);
	if (!$Character::isJavaIdentifierStart(first)) {
		return false;
	}
	int32_t i = $Character::charCount(first);
	while (i < str->length()) {
		int32_t cp = $Character::codePointAt(str, i);
		if (!$Character::isJavaIdentifierPart(cp)) {
			return false;
		}
		i += $Character::charCount(cp);
	}
	return true;
}

void Checks::clinit$($Class* clazz) {
	$assignStatic(Checks::RESERVED, $Set::of($$new($StringArray, {
		"abstract"_s,
		"assert"_s,
		"boolean"_s,
		"break"_s,
		"byte"_s,
		"case"_s,
		"catch"_s,
		"char"_s,
		"class"_s,
		"const"_s,
		"continue"_s,
		"default"_s,
		"do"_s,
		"double"_s,
		"else"_s,
		"enum"_s,
		"extends"_s,
		"final"_s,
		"finally"_s,
		"float"_s,
		"for"_s,
		"goto"_s,
		"if"_s,
		"implements"_s,
		"import"_s,
		"instanceof"_s,
		"int"_s,
		"interface"_s,
		"long"_s,
		"native"_s,
		"new"_s,
		"package"_s,
		"private"_s,
		"protected"_s,
		"public"_s,
		"return"_s,
		"short"_s,
		"static"_s,
		"strictfp"_s,
		"super"_s,
		"switch"_s,
		"synchronized"_s,
		"this"_s,
		"throw"_s,
		"throws"_s,
		"transient"_s,
		"try"_s,
		"void"_s,
		"volatile"_s,
		"while"_s,
		"true"_s,
		"false"_s,
		"null"_s,
		"_"_s
	})));
}

Checks::Checks() {
}

$Class* Checks::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"RESERVED", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Checks, RESERVED)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Checks, init$, void)},
		{"isClassName", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(Checks, isClassName, bool, $String*)},
		{"isJavaIdentifier", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(Checks, isJavaIdentifier, bool, $String*)},
		{"isPackageName", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(Checks, isPackageName, bool, $String*)},
		{"isTypeName", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(Checks, isTypeName, bool, $String*)},
		{"requireModuleName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Checks, requireModuleName, $String*, $String*)},
		{"requirePackageName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Checks, requirePackageName, $String*, $String*)},
		{"requireQualifiedClassName", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Checks, requireQualifiedClassName, $String*, $String*, $String*)},
		{"requireServiceProviderName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Checks, requireServiceProviderName, $String*, $String*)},
		{"requireServiceTypeName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Checks, requireServiceTypeName, $String*, $String*)},
		{"requireTypeName", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(Checks, requireTypeName, $String*, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.internal.module.Checks",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Checks, name, initialize, &classInfo$$, Checks::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Checks);
	});
	return class$;
}

$Class* Checks::class$ = nullptr;

		} // module
	} // internal
} // jdk