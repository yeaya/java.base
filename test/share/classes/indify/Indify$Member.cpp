#include <indify/Indify$Member.h>
#include <indify/Indify$Attr.h>
#include <indify/Indify$ClassFile.h>
#include <indify/Indify$CountedList.h>
#include <indify/Indify$InnerOuter.h>
#include <indify/Indify$Method.h>
#include <indify/Indify$Outer.h>
#include <indify/Indify$Pool.h>
#include <indify/Indify.h>
#include <java/io/DataInputStream.h>
#include <java/io/DataOutputStream.h>
#include <java/util/List.h>
#include <jcpp.h>

using $Indify = ::indify::Indify;
using $Indify$Attr = ::indify::Indify$Attr;
using $Indify$ClassFile = ::indify::Indify$ClassFile;
using $Indify$CountedList = ::indify::Indify$CountedList;
using $Indify$InnerOuter = ::indify::Indify$InnerOuter;
using $Indify$Method = ::indify::Indify$Method;
using $Indify$Outer = ::indify::Indify$Outer;
using $DataInputStream = ::java::io::DataInputStream;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $List = ::java::util::List;

namespace indify {

int32_t Indify$Member::hashCode() {
	 return this->$Indify$InnerOuter::hashCode();
}

bool Indify$Member::equals(Object$* arg0) {
	 return this->$Indify$InnerOuter::equals(arg0);
}

$Object* Indify$Member::clone() {
	 return this->$Indify$InnerOuter::clone();
}

void Indify$Member::finalize() {
	this->$Indify$InnerOuter::finalize();
}

void Indify$Member::init$() {
	$Indify$InnerOuter::init$();
	$load($Indify$Attr);
	$set(this, attrs$, $new($Indify$CountedList, $Indify$Attr::class$));
}

void Indify$Member::readFrom($DataInputStream* in) {
	this->access = $nc(in)->readShort();
	this->name = in->readShort();
	this->type = in->readShort();
	$Indify::readInputs(in, $$new($ObjectArray, {this->attrs$}));
}

void Indify$Member::writeTo($DataOutputStream* out) {
	$useLocalObjectStack();
	$Indify::writeOutputs(out, $$new($ObjectArray, {
		$($Short::valueOf(this->access)),
		$($Short::valueOf(this->name)),
		$($Short::valueOf(this->type)),
		this->attrs$
	}));
}

$List* Indify$Member::inners() {
	return this->attrs$;
}

$List* Indify$Member::attrs() {
	return this->attrs$;
}

$Indify$Outer* Indify$Member::outer() {
	return $cast($Indify$ClassFile, this->$Indify$InnerOuter::outer$);
}

$String* Indify$Member::nameString() {
	return $nc($nc($$cast($Indify$ClassFile, outer()))->pool)->getString(1, this->name);
}

$String* Indify$Member::typeString() {
	return $nc($nc($$cast($Indify$ClassFile, outer()))->pool)->getString(1, this->type);
}

$String* Indify$Member::toString() {
	$useLocalObjectStack();
	if (this->$Indify$InnerOuter::outer$ == nullptr) {
		return $Indify$InnerOuter::toString();
	}
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($(nameString()));
	var$0->append($instanceOf($Indify$Method, this) ? ""_s : ":"_s);
	var$0->append($($Indify::simplifyType($(typeString()))));
	return $str(var$0);
}

Indify$Member::Indify$Member() {
}

$Class* Indify$Member::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"access", "S", nullptr, $PUBLIC, $field(Indify$Member, access)},
		{"name", "S", nullptr, $PUBLIC, $field(Indify$Member, name)},
		{"type", "S", nullptr, $PUBLIC, $field(Indify$Member, type)},
		{"attrs", "Ljava/util/List;", "Ljava/util/List<Lindify/Indify$Attr;>;", $PUBLIC | $FINAL, $field(Indify$Member, attrs$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(Indify$Member, init$, void)},
		{"attrs", "()Ljava/util/List;", "()Ljava/util/List<Lindify/Indify$Attr;>;", $PUBLIC, $virtualMethod(Indify$Member, attrs, $List*)},
		{"inners", "()Ljava/util/List;", "()Ljava/util/List<Lindify/Indify$Attr;>;", $PUBLIC, $virtualMethod(Indify$Member, inners, $List*)},
		{"nameString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Indify$Member, nameString, $String*)},
		{"outer", "()Lindify/Indify$ClassFile;", nullptr, $PUBLIC, $virtualMethod(Indify$Member, outer, $Indify$Outer*)},
		{"readFrom", "(Ljava/io/DataInputStream;)V", nullptr, $PUBLIC, $virtualMethod(Indify$Member, readFrom, void, $DataInputStream*), "java.io.IOException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Indify$Member, toString, $String*)},
		{"typeString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Indify$Member, typeString, $String*)},
		{"writeTo", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(Indify$Member, writeTo, void, $DataOutputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"indify.Indify$Member", "indify.Indify", "Member", $PUBLIC | $STATIC},
		{"indify.Indify$InnerOuter", "indify.Indify", "InnerOuter", $PUBLIC | $STATIC | $ABSTRACT},
		{"indify.Indify$Chunk", "indify.Indify", "Chunk", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"indify.Indify$Member",
		"indify.Indify$InnerOuter",
		"indify.Indify$Chunk",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"indify.Indify"
	};
	$loadClass(Indify$Member, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Indify$Member));
	});
	return class$;
}

$Class* Indify$Member::class$ = nullptr;

} // indify