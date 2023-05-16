import React, { Component } from 'react';

class ReusalebleCompo extends Component {
    render() {
        return (
            <>
               <div className='card'>
                            <img src={this.props.imgSrc} alt="" />
                            <div className='card-body text-center'>
                                <h2>{this.props.title}</h2>
                                <span>Old Proce: <del>{this.props.OldPrice}</del></span>
                                <br />
                                <span>New price:{this.props.NewPrice} </span>
                                <br />
                                <button className='btn btn-primary'>click</button>
                            </div>
                        </div>    
            </>
        );
    }
}

export default ReusalebleCompo;