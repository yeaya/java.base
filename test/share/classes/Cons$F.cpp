#include <Cons$F.h>
#include <Cons.h>
#include <java/io/File.h>
#include <jcpp.h>

using $Cons = ::Cons;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void Cons$F::init$($String* path) {
	$File::init$(path);
	$set(this, exp, $Cons::cons(path));
}

void Cons$F::init$($String* parent, $String* child) {
	$File::init$(parent, child);
	$set(this, exp, $Cons::cons(parent, child));
}

void Cons$F::init$(Cons$F* parent, $String* child) {
	$File::init$(parent, child);
	if (parent == nullptr) {
		$set(this, exp, $Cons::cons(($String*)nullptr, child));
	} else {
		$set(this, exp, $Cons::cons(parent, child));
	}
}

Cons$F::Cons$F() {
}

$Class* Cons$F::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"exp", "Ljava/lang/String;", nullptr, 0, $field(Cons$F, exp)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(Cons$F, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(Cons$F, init$, void, $String*, $String*)},
		{"<init>", "(LCons$F;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(Cons$F, init$, void, Cons$F*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Cons$F", "Cons", "F", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Cons$F",
		"java.io.File",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Cons"
	};
	$loadClass(Cons$F, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Cons$F));
	});
	return class$;
}

$Class* Cons$F::class$ = nullptr;