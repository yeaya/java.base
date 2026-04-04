#include <indify/Indify$1.h>
#include <indify/Indify.h>
#include <java/io/File.h>
#include <java/lang/CharSequence.h>
#include <jcpp.h>

using $Indify = ::indify::Indify;
using $File = ::java::io::File;
using $CharSequence = ::java::lang::CharSequence;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace indify {

void Indify$1::init$($Indify* this$0) {
	$set(this, this$0, this$0);
}

bool Indify$1::accept($File* dir, $String* name) {
	if ($nc(name)->endsWith(".class"_s)) {
		return true;
	}
	if (name->contains("."_s)) {
		return false;
	}
	return $Character::isJavaIdentifierStart(name->charAt(0));
}

Indify$1::Indify$1() {
}

$Class* Indify$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lindify/Indify;", nullptr, $FINAL | $SYNTHETIC, $field(Indify$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lindify/Indify;)V", nullptr, 0, $method(Indify$1, init$, void, $Indify*)},
		{"accept", "(Ljava/io/File;Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(Indify$1, accept, bool, $File*, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"indify.Indify",
		"indifyTree",
		"(Ljava/io/File;Ljava/io/File;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"indify.Indify$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"indify.Indify$1",
		"java.lang.Object",
		"java.io.FilenameFilter",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"indify.Indify"
	};
	$loadClass(Indify$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Indify$1);
	});
	return class$;
}

$Class* Indify$1::class$ = nullptr;

} // indify