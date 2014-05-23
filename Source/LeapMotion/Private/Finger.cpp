#include "LeapMotionPrivatePCH.h"

UFinger::UFinger(const FPostConstructInitializeProperties &init) : UPointable(init)
{
}

UFinger::~UFinger()
{
}

FVector UFinger::Direction() const
{
	Leap::Vector vect;

	vect = _finger.direction();
	return (FVector(-vect.z, vect.x, vect.y));
}

ULeapFrame *UFinger::frame()
{
	ULeapFrame *rframe;

	rframe = ConstructObject<ULeapFrame>(ULeapFrame::StaticClass());
	rframe->setFrame(_finger.frame());
	return (rframe);
}

UHand *UFinger::Hand()
{
	UHand *rhand;

	rhand = ConstructObject<UHand>(UHand::StaticClass());
	rhand->setHand(_finger.hand());
	return (rhand);
}

int32 UFinger::Id() const
{
	return (_finger.id());
}

bool UFinger::isExtended() const
{
	return (_finger.isExtended());
}

bool UFinger::isFinger() const
{
	return (_finger.isFinger());
}

bool UFinger::isTool() const
{
	return (_finger.isTool());
}

bool UFinger::IsValid() const
{
	return (_finger.isValid());
}

float UFinger::Length() const
{
	return (_finger.length());
}

bool UFinger::equal(const UPointable *other) const
{
	return (_finger == other->getPointable());
}

bool UFinger::different(const UPointable *other) const
{
	return (_finger != other->getPointable());
}

FVector UFinger::stabilizedTipPosition()
{
	Leap::Vector vect;

	vect = _finger.stabilizedTipPosition();
	return (FVector(-vect.z, vect.x, vect.y));
}

float UFinger::timeVisible() const
{
	return (_finger.timeVisible());
}

FVector UFinger::tipPosition() const
{
	Leap::Vector vect;

	vect = _finger.tipPosition();
	return (FVector(-vect.z, vect.x, vect.y));
}

FVector UFinger::tipVelocity() const
{
	Leap::Vector vect;

	vect = _finger.tipVelocity();
	return (FVector(-vect.z, vect.x, vect.y));
}

float UFinger::touchDistance() const
{
	return (_finger.touchDistance());
}

LeapZone UFinger::touchZone() const
{
	switch (_finger.touchZone())
	{
	case Leap::Pointable::Zone::ZONE_NONE:
		return (ZONE_NONE);
	case Leap::Pointable::Zone::ZONE_HOVERING:
		return (ZONE_HOVERING);
	case Leap::Pointable::Zone::ZONE_TOUCHING:
		return (ZONE_TOUCHING);
	default:
		return (ZONE_ERROR);
	}
}

float UFinger::Width() const
{
	return (_finger.width());
}

void UFinger::setFinger(const Leap::Finger &finger)
{
	_finger = finger;
}