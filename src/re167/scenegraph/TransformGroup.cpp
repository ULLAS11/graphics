#include "TransformGroup.h"
#include <iostream>
#include <list>

using namespace RE167;


TransformGroup::~TransformGroup() {}

TransformGroup::TransformGroup(const Matrix4 &t) : transform(t) {}

/**
*
**/
void TransformGroup::draw(const Matrix4 &t, RE167::RenderContext *context) 
{
    Matrix4 t_new = t * transform;
    // For each node in the list, apply the transform to them and continue
    for (std::list<Node *>::iterator i = children.begin(); i != children.end(); i++) 
    {
        (*i)->draw(t_new, context);
    }
}

// TODO: very good chance that this should be a right multiply instead
/**
* The effect of applying a transformation to a TransformGroup is to left
* multiply the current transformation by this matrix. 
* Note that this is a completely different method than setTransformation()!
**/
/*void TransformGroup::applyTransformation(const Matrix4 &rhs)
{
    transform = rhs * transform;
} */