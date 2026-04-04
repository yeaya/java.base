#include <indify/Indify$Code.h>
#include <indify/Indify$Attr.h>
#include <indify/Indify$CountedList.h>
#include <indify/Indify$InnerOuter.h>
#include <indify/Indify$Instruction.h>
#include <indify/Indify.h>
#include <java/io/DataInputStream.h>
#include <java/io/DataOutputStream.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ShortArray = $Array<::java::lang::Short>;
using $Indify = ::indify::Indify;
using $Indify$Attr = ::indify::Indify$Attr;
using $Indify$CountedList = ::indify::Indify$CountedList;
using $Indify$InnerOuter = ::indify::Indify$InnerOuter;
using $Indify$Instruction = ::indify::Indify$Instruction;
using $DataInputStream = ::java::io::DataInputStream;
using $DataOutputStream = ::java::io::DataOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $List = ::java::util::List;

namespace indify {

int32_t Indify$Code::hashCode() {
	 return this->$Indify$InnerOuter::hashCode();
}

bool Indify$Code::equals(Object$* arg0) {
	 return this->$Indify$InnerOuter::equals(arg0);
}

$Object* Indify$Code::clone() {
	 return this->$Indify$InnerOuter::clone();
}

$String* Indify$Code::toString() {
	 return this->$Indify$InnerOuter::toString();
}

void Indify$Code::finalize() {
	this->$Indify$InnerOuter::finalize();
}

void Indify$Code::init$() {
	$Indify$InnerOuter::init$();
	$set(this, etable, $new($Indify$CountedList, $getClass($ShortArray), 4));
	$load($Indify$Attr);
	$set(this, attrs$, $new($Indify$CountedList, $Indify$Attr::class$));
}

void Indify$Code::readFrom($DataInputStream* in) {
	this->stacks = $nc(in)->readShort();
	this->locals = in->readShort();
	$set(this, bytes, $Indify::readRawBytes(in, in->readInt()));
	$Indify::readInputs(in, $$new($ObjectArray, {
		this->etable,
		this->attrs$
	}));
}

void Indify$Code::writeTo($DataOutputStream* out) {
	$useLocalObjectStack();
	$Indify::writeOutputs(out, $$new($ObjectArray, {
		$($Short::valueOf(this->stacks)),
		$($Short::valueOf(this->locals)),
		$($Integer::valueOf($nc(this->bytes)->length)),
		this->bytes,
		this->etable,
		this->attrs$
	}));
}

$List* Indify$Code::inners() {
	return this->attrs$;
}

$List* Indify$Code::attrs() {
	return this->attrs$;
}

$Indify$Instruction* Indify$Code::instructions() {
	return $new($Indify$Instruction, this->bytes, 0);
}

Indify$Code::Indify$Code() {
}

$Class* Indify$Code::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"stacks", "S", nullptr, $PUBLIC, $field(Indify$Code, stacks)},
		{"locals", "S", nullptr, $PUBLIC, $field(Indify$Code, locals)},
		{"bytes", "[B", nullptr, $PUBLIC, $field(Indify$Code, bytes)},
		{"etable", "Ljava/util/List;", "Ljava/util/List<[Ljava/lang/Short;>;", $PUBLIC | $FINAL, $field(Indify$Code, etable)},
		{"attrs", "Ljava/util/List;", "Ljava/util/List<Lindify/Indify$Attr;>;", $PUBLIC | $FINAL, $field(Indify$Code, attrs$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(Indify$Code, init$, void)},
		{"attrs", "()Ljava/util/List;", "()Ljava/util/List<Lindify/Indify$Attr;>;", $PUBLIC, $virtualMethod(Indify$Code, attrs, $List*)},
		{"inners", "()Ljava/util/List;", "()Ljava/util/List<Lindify/Indify$Attr;>;", $PUBLIC, $virtualMethod(Indify$Code, inners, $List*)},
		{"instructions", "()Lindify/Indify$Instruction;", nullptr, $PUBLIC, $virtualMethod(Indify$Code, instructions, $Indify$Instruction*)},
		{"readFrom", "(Ljava/io/DataInputStream;)V", nullptr, $PUBLIC, $virtualMethod(Indify$Code, readFrom, void, $DataInputStream*), "java.io.IOException"},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"writeTo", "(Ljava/io/DataOutputStream;)V", nullptr, $PUBLIC, $virtualMethod(Indify$Code, writeTo, void, $DataOutputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"indify.Indify$Code", "indify.Indify", "Code", $PUBLIC | $STATIC},
		{"indify.Indify$InnerOuter", "indify.Indify", "InnerOuter", $PUBLIC | $STATIC | $ABSTRACT},
		{"indify.Indify$Chunk", "indify.Indify", "Chunk", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"indify.Indify$Code",
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
	$loadClass(Indify$Code, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Indify$Code));
	});
	return class$;
}

$Class* Indify$Code::class$ = nullptr;

} // indify