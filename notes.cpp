void insertionSort (vector<Sprite*> &data, Sprite *sprite) {
    int i, j;
    Sprite* temp;
    for (i=1; i < data.size(); i++) {
        j=i; tmp=data[i];
        while (j>0 && tmp.zPosition < data[j-1].zPosition) {
            data[j]=data[j-1]; 
            j--;
        }
        data[j]=tmp;
    } 
}

void Scene::renderSceneOn(SDL_Renderer *renderer) {
	for(std::vector::iterator it = layered_sprites.begin(); it != layered_sprites.end(); ++it) {
		//do stuff
		Sprite *sprite = *it;
    }
}
