 import React, { Component } from 'react';
import Reusecompo from './Reusecompo';
class compo extends Component {
    render() {
        return (
            <>
              <div className='container'>
                <div className='row mt-5'>
                    <div className='col-3'>
                        <Reusecompo imgsrc="images/black.jpg" title="asian shoes" oldprice="5000" newprice='4000' />
                    </div>
                    <div className='col-3'>
                        <Reusecompo imgsrc="images/casual.jpg" title="casual shoes" oldprice="6000" newprice='5000' />
                    </div>
                    <div className='col-3'>
                        <Reusecompo imgsrc="images/jorden.jpg" title="jorden shoes" oldprice="8000" newprice='7000' />
                    </div>
                    <div className='col-3'>
                        <Reusecompo imgsrc="images/loffer.jpg" title="lofer" oldprice="3000" newprice='2000' />
                    </div>
                </div>
                </div>  
            </>
        );
    }
}

export default compo;