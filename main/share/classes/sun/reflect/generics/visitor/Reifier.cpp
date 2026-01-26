#include <sun/reflect/generics/visitor/Reifier.h>

#include <java/lang/AssertionError.h>
#include <java/lang/reflect/ParameterizedType.h>
#include <java/lang/reflect/Type.h>
#include <java/lang/reflect/TypeVariable.h>
#include <java/lang/reflect/WildcardType.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <sun/reflect/generics/factory/GenericsFactory.h>
#include <sun/reflect/generics/tree/ArrayTypeSignature.h>
#include <sun/reflect/generics/tree/BooleanSignature.h>
#include <sun/reflect/generics/tree/BottomSignature.h>
#include <sun/reflect/generics/tree/ByteSignature.h>
#include <sun/reflect/generics/tree/CharSignature.h>
#include <sun/reflect/generics/tree/ClassTypeSignature.h>
#include <sun/reflect/generics/tree/DoubleSignature.h>
#include <sun/reflect/generics/tree/FieldTypeSignature.h>
#include <sun/reflect/generics/tree/FloatSignature.h>
#include <sun/reflect/generics/tree/FormalTypeParameter.h>
#include <sun/reflect/generics/tree/IntSignature.h>
#include <sun/reflect/generics/tree/LongSignature.h>
#include <sun/reflect/generics/tree/ShortSignature.h>
#include <sun/reflect/generics/tree/SimpleClassTypeSignature.h>
#include <sun/reflect/generics/tree/TypeArgument.h>
#include <sun/reflect/generics/tree/TypeSignature.h>
#include <sun/reflect/generics/tree/TypeVariableSignature.h>
#include <sun/reflect/generics/tree/VoidDescriptor.h>
#include <sun/reflect/generics/tree/Wildcard.h>
#include <sun/reflect/generics/visitor/TypeTreeVisitor.h>
#include <jcpp.h>

using $TypeArray = $Array<::java::lang::reflect::Type>;
using $FieldTypeSignatureArray = $Array<::sun::reflect::generics::tree::FieldTypeSignature>;
using $TypeArgumentArray = $Array<::sun::reflect::generics::tree::TypeArgument>;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Type = ::java::lang::reflect::Type;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $GenericsFactory = ::sun::reflect::generics::factory::GenericsFactory;
using $ArrayTypeSignature = ::sun::reflect::generics::tree::ArrayTypeSignature;
using $BooleanSignature = ::sun::reflect::generics::tree::BooleanSignature;
using $BottomSignature = ::sun::reflect::generics::tree::BottomSignature;
using $ByteSignature = ::sun::reflect::generics::tree::ByteSignature;
using $CharSignature = ::sun::reflect::generics::tree::CharSignature;
using $ClassTypeSignature = ::sun::reflect::generics::tree::ClassTypeSignature;
using $DoubleSignature = ::sun::reflect::generics::tree::DoubleSignature;
using $FloatSignature = ::sun::reflect::generics::tree::FloatSignature;
using $FormalTypeParameter = ::sun::reflect::generics::tree::FormalTypeParameter;
using $IntSignature = ::sun::reflect::generics::tree::IntSignature;
using $LongSignature = ::sun::reflect::generics::tree::LongSignature;
using $ShortSignature = ::sun::reflect::generics::tree::ShortSignature;
using $SimpleClassTypeSignature = ::sun::reflect::generics::tree::SimpleClassTypeSignature;
using $TypeArgument = ::sun::reflect::generics::tree::TypeArgument;
using $TypeSignature = ::sun::reflect::generics::tree::TypeSignature;
using $TypeVariableSignature = ::sun::reflect::generics::tree::TypeVariableSignature;
using $VoidDescriptor = ::sun::reflect::generics::tree::VoidDescriptor;
using $Wildcard = ::sun::reflect::generics::tree::Wildcard;
using $TypeTreeVisitor = ::sun::reflect::generics::visitor::TypeTreeVisitor;

namespace sun {
	namespace reflect {
		namespace generics {
			namespace visitor {

$FieldInfo _Reifier_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Reifier, $assertionsDisabled)},
	{"resultType", "Ljava/lang/reflect/Type;", nullptr, $PRIVATE, $field(Reifier, resultType)},
	{"factory", "Lsun/reflect/generics/factory/GenericsFactory;", nullptr, $PRIVATE | $FINAL, $field(Reifier, factory)},
	{}
};

$MethodInfo _Reifier_MethodInfo_[] = {
	{"<init>", "(Lsun/reflect/generics/factory/GenericsFactory;)V", nullptr, $PRIVATE, $method(Reifier, init$, void, $GenericsFactory*)},
	{"getFactory", "()Lsun/reflect/generics/factory/GenericsFactory;", nullptr, $PRIVATE, $method(Reifier, getFactory, $GenericsFactory*)},
	{"getResult", "()Ljava/lang/reflect/Type;", nullptr, $PUBLIC, $virtualMethod(Reifier, getResult, $Object*)},
	{"make", "(Lsun/reflect/generics/factory/GenericsFactory;)Lsun/reflect/generics/visitor/Reifier;", nullptr, $PUBLIC | $STATIC, $staticMethod(Reifier, make, Reifier*, $GenericsFactory*)},
	{"reifyTypeArguments", "([Lsun/reflect/generics/tree/TypeArgument;)[Ljava/lang/reflect/Type;", nullptr, $PRIVATE, $method(Reifier, reifyTypeArguments, $TypeArray*, $TypeArgumentArray*)},
	{"visitArrayTypeSignature", "(Lsun/reflect/generics/tree/ArrayTypeSignature;)V", nullptr, $PUBLIC, $virtualMethod(Reifier, visitArrayTypeSignature, void, $ArrayTypeSignature*)},
	{"visitBooleanSignature", "(Lsun/reflect/generics/tree/BooleanSignature;)V", nullptr, $PUBLIC, $virtualMethod(Reifier, visitBooleanSignature, void, $BooleanSignature*)},
	{"visitBottomSignature", "(Lsun/reflect/generics/tree/BottomSignature;)V", nullptr, $PUBLIC, $virtualMethod(Reifier, visitBottomSignature, void, $BottomSignature*)},
	{"visitByteSignature", "(Lsun/reflect/generics/tree/ByteSignature;)V", nullptr, $PUBLIC, $virtualMethod(Reifier, visitByteSignature, void, $ByteSignature*)},
	{"visitCharSignature", "(Lsun/reflect/generics/tree/CharSignature;)V", nullptr, $PUBLIC, $virtualMethod(Reifier, visitCharSignature, void, $CharSignature*)},
	{"visitClassTypeSignature", "(Lsun/reflect/generics/tree/ClassTypeSignature;)V", nullptr, $PUBLIC, $virtualMethod(Reifier, visitClassTypeSignature, void, $ClassTypeSignature*)},
	{"visitDoubleSignature", "(Lsun/reflect/generics/tree/DoubleSignature;)V", nullptr, $PUBLIC, $virtualMethod(Reifier, visitDoubleSignature, void, $DoubleSignature*)},
	{"visitFloatSignature", "(Lsun/reflect/generics/tree/FloatSignature;)V", nullptr, $PUBLIC, $virtualMethod(Reifier, visitFloatSignature, void, $FloatSignature*)},
	{"visitFormalTypeParameter", "(Lsun/reflect/generics/tree/FormalTypeParameter;)V", nullptr, $PUBLIC, $virtualMethod(Reifier, visitFormalTypeParameter, void, $FormalTypeParameter*)},
	{"visitIntSignature", "(Lsun/reflect/generics/tree/IntSignature;)V", nullptr, $PUBLIC, $virtualMethod(Reifier, visitIntSignature, void, $IntSignature*)},
	{"visitLongSignature", "(Lsun/reflect/generics/tree/LongSignature;)V", nullptr, $PUBLIC, $virtualMethod(Reifier, visitLongSignature, void, $LongSignature*)},
	{"visitShortSignature", "(Lsun/reflect/generics/tree/ShortSignature;)V", nullptr, $PUBLIC, $virtualMethod(Reifier, visitShortSignature, void, $ShortSignature*)},
	{"visitSimpleClassTypeSignature", "(Lsun/reflect/generics/tree/SimpleClassTypeSignature;)V", nullptr, $PUBLIC, $virtualMethod(Reifier, visitSimpleClassTypeSignature, void, $SimpleClassTypeSignature*)},
	{"visitTypeVariableSignature", "(Lsun/reflect/generics/tree/TypeVariableSignature;)V", nullptr, $PUBLIC, $virtualMethod(Reifier, visitTypeVariableSignature, void, $TypeVariableSignature*)},
	{"visitVoidDescriptor", "(Lsun/reflect/generics/tree/VoidDescriptor;)V", nullptr, $PUBLIC, $virtualMethod(Reifier, visitVoidDescriptor, void, $VoidDescriptor*)},
	{"visitWildcard", "(Lsun/reflect/generics/tree/Wildcard;)V", nullptr, $PUBLIC, $virtualMethod(Reifier, visitWildcard, void, $Wildcard*)},
	{}
};

$ClassInfo _Reifier_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.reflect.generics.visitor.Reifier",
	"java.lang.Object",
	"sun.reflect.generics.visitor.TypeTreeVisitor",
	_Reifier_FieldInfo_,
	_Reifier_MethodInfo_,
	"Ljava/lang/Object;Lsun/reflect/generics/visitor/TypeTreeVisitor<Ljava/lang/reflect/Type;>;"
};

$Object* allocate$Reifier($Class* clazz) {
	return $of($alloc(Reifier));
}

bool Reifier::$assertionsDisabled = false;

void Reifier::init$($GenericsFactory* f) {
	$set(this, factory, f);
}

$GenericsFactory* Reifier::getFactory() {
	return this->factory;
}

Reifier* Reifier::make($GenericsFactory* f) {
	$init(Reifier);
	return $new(Reifier, f);
}

$TypeArray* Reifier::reifyTypeArguments($TypeArgumentArray* tas) {
	$var($TypeArray, ts, $new($TypeArray, $nc(tas)->length));
	for (int32_t i = 0; i < tas->length; ++i) {
		$nc(tas->get(i))->accept(this);
		ts->set(i, this->resultType);
	}
	return ts;
}

$Object* Reifier::getResult() {
	if (!Reifier::$assertionsDisabled && !(this->resultType != nullptr)) {
		$throwNew($AssertionError);
	}
	return $of(this->resultType);
}

void Reifier::visitFormalTypeParameter($FormalTypeParameter* ftp) {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, $nc(ftp)->getName());
	$set(this, resultType, $nc($(getFactory()))->makeTypeVariable(var$0, $(ftp->getBounds())));
}

void Reifier::visitClassTypeSignature($ClassTypeSignature* ct) {
	$useLocalCurrentObjectStackCache();
	$var($List, scts, $nc(ct)->getPath());
	if (!Reifier::$assertionsDisabled && !(!$nc(scts)->isEmpty())) {
		$throwNew($AssertionError);
	}
	$var($Iterator, iter, $nc(scts)->iterator());
	$var($SimpleClassTypeSignature, sc, $cast($SimpleClassTypeSignature, $nc(iter)->next()));
	$var($StringBuilder, n, $new($StringBuilder, $($nc(sc)->getName())));
	bool dollar = $nc(sc)->getDollar();
	while (true) {
		bool var$0 = iter->hasNext();
		if (!(var$0 && $nc($($nc(sc)->getTypeArguments()))->length == 0)) {
			break;
		}
		{
			$assign(sc, $cast($SimpleClassTypeSignature, iter->next()));
			dollar = $nc(sc)->getDollar();
			n->append(dollar ? "$"_s : "."_s)->append($(sc->getName()));
		}
	}
	bool var$1 = !Reifier::$assertionsDisabled;
	if (var$1) {
		bool var$2 = !(iter->hasNext());
		var$1 = !(var$2 || ($nc($(sc->getTypeArguments()))->length > 0));
	}
	if (var$1) {
		$throwNew($AssertionError);
	}
	$var($Type, c, $nc($(getFactory()))->makeNamedType($(n->toString())));
	if ($nc($(sc->getTypeArguments()))->length == 0) {
		if (!Reifier::$assertionsDisabled && !(!iter->hasNext())) {
			$throwNew($AssertionError);
		}
		$set(this, resultType, c);
	} else {
		if (!Reifier::$assertionsDisabled && !($nc($(sc->getTypeArguments()))->length > 0)) {
			$throwNew($AssertionError);
		}
		$var($TypeArray, pts, reifyTypeArguments($(sc->getTypeArguments())));
		$var($Type, owner, $nc($(getFactory()))->makeParameterizedType(c, pts, nullptr));
		dollar = false;
		while (iter->hasNext()) {
			$assign(sc, $cast($SimpleClassTypeSignature, iter->next()));
			dollar = $nc(sc)->getDollar();
			n->append(dollar ? "$"_s : "."_s)->append($(sc->getName()));
			$assign(c, $nc($(getFactory()))->makeNamedType($(n->toString())));
			$assign(pts, reifyTypeArguments($(sc->getTypeArguments())));
			$assign(owner, $nc($(getFactory()))->makeParameterizedType(c, pts, owner));
		}
		$set(this, resultType, owner);
	}
}

void Reifier::visitArrayTypeSignature($ArrayTypeSignature* a) {
	$useLocalCurrentObjectStackCache();
	$nc($($nc(a)->getComponentType()))->accept(this);
	$var($Type, ct, this->resultType);
	$set(this, resultType, $nc($(getFactory()))->makeArrayType(ct));
}

void Reifier::visitTypeVariableSignature($TypeVariableSignature* tv) {
	$useLocalCurrentObjectStackCache();
	$set(this, resultType, $nc($(getFactory()))->findTypeVariable($($nc(tv)->getIdentifier())));
}

void Reifier::visitWildcard($Wildcard* w) {
	$useLocalCurrentObjectStackCache();
	$var($FieldTypeSignatureArray, var$0, $nc(w)->getUpperBounds());
	$set(this, resultType, $nc($(getFactory()))->makeWildcard(var$0, $(w->getLowerBounds())));
}

void Reifier::visitSimpleClassTypeSignature($SimpleClassTypeSignature* sct) {
	$useLocalCurrentObjectStackCache();
	$set(this, resultType, $nc($(getFactory()))->makeNamedType($($nc(sct)->getName())));
}

void Reifier::visitBottomSignature($BottomSignature* b) {
}

void Reifier::visitByteSignature($ByteSignature* b) {
	$set(this, resultType, $nc($(getFactory()))->makeByte());
}

void Reifier::visitBooleanSignature($BooleanSignature* b) {
	$set(this, resultType, $nc($(getFactory()))->makeBool());
}

void Reifier::visitShortSignature($ShortSignature* s) {
	$set(this, resultType, $nc($(getFactory()))->makeShort());
}

void Reifier::visitCharSignature($CharSignature* c) {
	$set(this, resultType, $nc($(getFactory()))->makeChar());
}

void Reifier::visitIntSignature($IntSignature* i) {
	$set(this, resultType, $nc($(getFactory()))->makeInt());
}

void Reifier::visitLongSignature($LongSignature* l) {
	$set(this, resultType, $nc($(getFactory()))->makeLong());
}

void Reifier::visitFloatSignature($FloatSignature* f) {
	$set(this, resultType, $nc($(getFactory()))->makeFloat());
}

void Reifier::visitDoubleSignature($DoubleSignature* d) {
	$set(this, resultType, $nc($(getFactory()))->makeDouble());
}

void Reifier::visitVoidDescriptor($VoidDescriptor* v) {
	$set(this, resultType, $nc($(getFactory()))->makeVoid());
}

void clinit$Reifier($Class* class$) {
	Reifier::$assertionsDisabled = !Reifier::class$->desiredAssertionStatus();
}

Reifier::Reifier() {
}

$Class* Reifier::load$($String* name, bool initialize) {
	$loadClass(Reifier, name, initialize, &_Reifier_ClassInfo_, clinit$Reifier, allocate$Reifier);
	return class$;
}

$Class* Reifier::class$ = nullptr;

			} // visitor
		} // generics
	} // reflect
} // sun