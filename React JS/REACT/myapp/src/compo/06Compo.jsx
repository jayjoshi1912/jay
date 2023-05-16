import React, { Component } from 'react';
import ReusalebleCompo from './ReusalebleCompo';

class Compo extends Component {
    render() {
        return (
            <>
              <div className='container'>
                <div className='row mt-5'>
                    <div className='col-3'>
                       <ReusalebleCompo imgSrc="img/black.jpg" title="asian shoes" OldPrice="5000" NewPrice="4000"/>  
                    </div>
                    
                    <div className='col-3'>
                    <ReusalebleCompo imgSrc="img/casual.jpg" title="casual shoes" OldPrice="6000" NewPrice="5000"/>  
                    </div>


                    <div className='col-3'>
                    <ReusalebleCompo imgSrc="img/loffer.jpg" title="loffer shoes" OldPrice="7000" NewPrice="6000"/>     
                    </div>


                    <div className='col-3'>
                    <ReusalebleCompo imgSrc="img/jorden.jpg" title="jorden shoes" OldPrice="4000" NewPrice="3000"/>     
                    </div>
                </div>
                </div>  
            </>
        );
    }
}

export default Compo;