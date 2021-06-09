#include "./entity.h"

Entity::Entity(EntityManager& manager) 
		: manager(manager), isActive(true){
	//this->isActive = true;
}

Entity::Entity(EntityManager& manager, std::string name)
		: manager(manager), name(name), isActive(true){
	//this->isActive = true;
}

void Entity::Update(float deltaTime){
	for(auto& component : components)
			component->Update(deltaTime);
}

void Entity::Render(){
	/*for(auto& component : components)
			component->Render();*/
	std::for_each(components.begin(), components.end(), 
			[](Component * component){
				component->Render();
			});
}

void Entity::Destroy(){
	isActive = false;
	//this->isActive = false;
}

bool Entity::IsActive() const {
	return isActive;
	//return this->isActive;
}
